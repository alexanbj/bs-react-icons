module Provider = {
  [@bs.deriving abstract]
  type iconContext = {
    [@bs.as "Provider"]
    provider: ReasonReact.reactClass,
  };

  [@bs.deriving abstract]
  type jsProps = {value: ReactIcons_IconProps.jsIconProps};

  [@bs.module "react-icons"] external iconContext: iconContext = "IconContext";
  let make = (~className=?, ~color=?, ~size=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=iconContext->providerGet,
      ~props=
        jsProps(
          ~value=
            ReactIcons_IconProps.jsIconProps(
              ~className?,
              ~color?,
              ~size?,
              ~style?,
              (),
            ),
        ),
      children,
    );
};

/*
 * The rest of this file has been generated
 */