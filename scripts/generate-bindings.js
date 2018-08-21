const fs = require('fs');
const os = require('os');

const iconSets = {
  Fa: require('react-icons/fa'),
  Io: require('react-icons/io'),
  Md: require('react-icons/md'),
  Ti: require('react-icons/ti'),
  Go: require('react-icons/go'),
  Fi: require('react-icons/fi')
};

/**
 * Even Prettier can't make this readable >_<
 */
function generateContents() {
  return Object.entries(iconSets)
    .map(([iconSet, icons]) =>
      Object.keys(icons)
        .map(
          icon =>
            `module ${icon} = {
  [@bs.module "react-icons/${iconSet.toLowerCase()}"] external reactClass : ReasonReact.reactClass = "${icon}";
  let make = (children) =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
};`
        )
        .join(`${os.EOL}${os.EOL}`)
    )
    .join(`${os.EOL}${os.EOL}`);
}

fs.writeFileSync('./src/ReactIcons.re', generateContents());
