const fs = require('fs');

const iconSets = {
  Fa: require('react-icons/fa'),
  Io: require('react-icons/io'),
  Md: require('react-icons/md'),
  Ti: require('react-icons/ti'),
  Go: require('react-icons/go'),
  Fi: require('react-icons/fi')
};

const iconTemplate = (iconSetKey, iconName) => `
[@bs.module "react-icons/${iconSetKey.toLowerCase()}"]
external reactClass : ReasonReact.reactClass = "${iconName}";
let make = (~className=?, ~color=?, ~size=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=ReactIcons.jsIconProps(~className?, ~color?, ~size?, ~style?, ()),
    children,
  );

`;

Object.keys(iconSets).forEach(iconSetKey => {
  const iconSetPath = `./src/${iconSetKey}`;

  // Make sure the directories for each icon set exists
  if (!fs.existsSync(iconSetPath)) {
    fs.mkdirSync(iconSetPath);
  }

  // Write each icon in the set to it's own file
  Object.keys(iconSets[iconSetKey]).forEach(iconName => {
    const iconPath = `${iconSetPath}/${iconName}.re`;

    fs.writeFileSync(iconPath, iconTemplate(iconSetKey, iconName));
  });
});
