module type Icon = {let reactClass: ReasonReact.reactClass;};

module MakeIcon = (Icon: Icon) => {
  let make = (~className=?, ~color=?, ~size=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=Icon.reactClass,
      ~props=
        ReactIcons_IconProps.jsIconProps(
          ~className?,
          ~color?,
          ~size?,
          ~style?,
          (),
        ),
      children,
    );
};