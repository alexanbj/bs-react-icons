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
module ${iconName} = ReactIcons.MakeIcon({
  [@bs.module "react-icons/${iconSetKey.toLowerCase()}"] 
  external reactClass : ReasonReact.reactClass = "${iconName}";
});
`;

Object.keys(iconSets).forEach(iconSetKey => {
  const iconSetPath = `./src/${iconSetKey}.re`;

  fs.closeSync(fs.openSync(iconSetPath, 'w'));
  //   fs.writeFileSync(
  //     iconSetPath,
  //     `
  // open ReactIcons;

  // `
  //   );

  // Write each icon in the set to it's own file
  Object.keys(iconSets[iconSetKey]).forEach(iconName => {
    fs.appendFileSync(iconSetPath, iconTemplate(iconSetKey, iconName));
  });
});
