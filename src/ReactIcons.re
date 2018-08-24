[@bs.deriving abstract]
type jsIconProps = {
  [@bs.optional]
  className: string,
  [@bs.optional]
  color: string,
  [@bs.optional]
  size: string,
  [@bs.optional]
  style: ReactDOMRe.Style.t,
};

module IconContext = {
  [@bs.deriving abstract]
  type iconContext = {
    [@bs.as "Provider"]
    provider: ReasonReact.reactClass,
  };

  [@bs.deriving abstract]
  type jsProps = {value: jsIconProps};

  [@bs.module "react-icons"] external iconContext: iconContext = "IconContext";

  module Provider = {
    let make = (~className=?, ~color=?, ~size=?, ~style=?, children) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=iconContext->providerGet,
        ~props=
          jsProps(
            ~value=jsIconProps(~className?, ~color?, ~size?, ~style?, ()),
          ),
        children,
      );
  };
};