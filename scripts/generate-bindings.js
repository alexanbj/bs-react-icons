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
            `module ${icon} = MakeIcon({
  [@bs.module "react-icons/${iconSet.toLowerCase()}"] 
  external reactClass : ReasonReact.reactClass = "${icon}";
});`
        )
        .join(`${os.EOL}${os.EOL}`)
    )
    .join(`${os.EOL}${os.EOL}`);
}

fs.copyFileSync('./scripts/bindings-template.re', './src/ReactIcons.re');
fs.appendFileSync('./src/ReactIcons.re', generateContents());
