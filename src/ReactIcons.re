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
 */module Fa500px = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "Fa500px";
});

module FaAccessibleIcon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAccessibleIcon";
});

module FaAccusoft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAccusoft";
});

module FaAdn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAdn";
});

module FaAdversal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAdversal";
});

module FaAffiliatetheme = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAffiliatetheme";
});

module FaAlgolia = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAlgolia";
});

module FaAmazonPay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAmazonPay";
});

module FaAmazon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAmazon";
});

module FaAmilia = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAmilia";
});

module FaAndroid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAndroid";
});

module FaAngellist = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngellist";
});

module FaAngrycreative = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngrycreative";
});

module FaAngular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngular";
});

module FaAppStoreIos = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAppStoreIos";
});

module FaAppStore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAppStore";
});

module FaApper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaApper";
});

module FaApplePay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaApplePay";
});

module FaApple = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaApple";
});

module FaAsymmetrik = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAsymmetrik";
});

module FaAudible = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAudible";
});

module FaAutoprefixer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAutoprefixer";
});

module FaAvianex = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAvianex";
});

module FaAviato = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAviato";
});

module FaAws = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAws";
});

module FaBandcamp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBandcamp";
});

module FaBehanceSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBehanceSquare";
});

module FaBehance = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBehance";
});

module FaBimobject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBimobject";
});

module FaBitbucket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBitbucket";
});

module FaBitcoin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBitcoin";
});

module FaBity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBity";
});

module FaBlackTie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBlackTie";
});

module FaBlackberry = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBlackberry";
});

module FaBloggerB = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBloggerB";
});

module FaBlogger = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBlogger";
});

module FaBluetoothB = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBluetoothB";
});

module FaBluetooth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBluetooth";
});

module FaBtc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBtc";
});

module FaBuromobelexperte = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBuromobelexperte";
});

module FaBuysellads = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBuysellads";
});

module FaCcAmazonPay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcAmazonPay";
});

module FaCcAmex = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcAmex";
});

module FaCcApplePay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcApplePay";
});

module FaCcDinersClub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcDinersClub";
});

module FaCcDiscover = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcDiscover";
});

module FaCcJcb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcJcb";
});

module FaCcMastercard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcMastercard";
});

module FaCcPaypal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcPaypal";
});

module FaCcStripe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcStripe";
});

module FaCcVisa = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCcVisa";
});

module FaCentercode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCentercode";
});

module FaChrome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChrome";
});

module FaCloudscale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCloudscale";
});

module FaCloudsmith = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCloudsmith";
});

module FaCloudversify = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCloudversify";
});

module FaCodepen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCodepen";
});

module FaCodiepie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCodiepie";
});

module FaConnectdevelop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaConnectdevelop";
});

module FaContao = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaContao";
});

module FaCpanel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCpanel";
});

module FaCreativeCommonsBy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsBy";
});

module FaCreativeCommonsNcEu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsNcEu";
});

module FaCreativeCommonsNcJp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsNcJp";
});

module FaCreativeCommonsNc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsNc";
});

module FaCreativeCommonsNd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsNd";
});

module FaCreativeCommonsPdAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsPdAlt";
});

module FaCreativeCommonsPd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsPd";
});

module FaCreativeCommonsRemix = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsRemix";
});

module FaCreativeCommonsSa = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsSa";
});

module FaCreativeCommonsSamplingPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsSamplingPlus";
});

module FaCreativeCommonsSampling = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsSampling";
});

module FaCreativeCommonsShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommonsShare";
});

module FaCreativeCommons = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreativeCommons";
});

module FaCss3Alt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCss3Alt";
});

module FaCss3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCss3";
});

module FaCuttlefish = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCuttlefish";
});

module FaDAndD = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDAndD";
});

module FaDashcube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDashcube";
});

module FaDelicious = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDelicious";
});

module FaDeploydog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDeploydog";
});

module FaDeskpro = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDeskpro";
});

module FaDeviantart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDeviantart";
});

module FaDigg = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDigg";
});

module FaDigitalOcean = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDigitalOcean";
});

module FaDiscord = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiscord";
});

module FaDiscourse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiscourse";
});

module FaDochub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDochub";
});

module FaDocker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDocker";
});

module FaDraft2digital = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDraft2digital";
});

module FaDribbbleSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDribbbleSquare";
});

module FaDribbble = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDribbble";
});

module FaDropbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDropbox";
});

module FaDrupal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDrupal";
});

module FaDyalog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDyalog";
});

module FaEarlybirds = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEarlybirds";
});

module FaEbay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEbay";
});

module FaEdge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEdge";
});

module FaElementor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaElementor";
});

module FaEmber = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEmber";
});

module FaEmpire = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEmpire";
});

module FaEnvira = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEnvira";
});

module FaErlang = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaErlang";
});

module FaEthereum = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEthereum";
});

module FaEtsy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEtsy";
});

module FaExpeditedssl = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExpeditedssl";
});

module FaFacebookF = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFacebookF";
});

module FaFacebookMessenger = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFacebookMessenger";
});

module FaFacebookSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFacebookSquare";
});

module FaFacebook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFacebook";
});

module FaFirefox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFirefox";
});

module FaFirstOrderAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFirstOrderAlt";
});

module FaFirstOrder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFirstOrder";
});

module FaFirstdraft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFirstdraft";
});

module FaFlickr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFlickr";
});

module FaFlipboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFlipboard";
});

module FaFly = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFly";
});

module FaFontAwesomeAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFontAwesomeAlt";
});

module FaFontAwesomeFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFontAwesomeFlag";
});

module FaFontAwesomeLogoFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFontAwesomeLogoFull";
});

module FaFontAwesome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFontAwesome";
});

module FaFonticonsFi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFonticonsFi";
});

module FaFonticons = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFonticons";
});

module FaFortAwesomeAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFortAwesomeAlt";
});

module FaFortAwesome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFortAwesome";
});

module FaForumbee = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaForumbee";
});

module FaFoursquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFoursquare";
});

module FaFreeCodeCamp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFreeCodeCamp";
});

module FaFreebsd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFreebsd";
});

module FaFulcrum = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFulcrum";
});

module FaGalacticRepublic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGalacticRepublic";
});

module FaGalacticSenate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGalacticSenate";
});

module FaGetPocket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGetPocket";
});

module FaGgCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGgCircle";
});

module FaGg = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGg";
});

module FaGitSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGitSquare";
});

module FaGit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGit";
});

module FaGithubAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGithubAlt";
});

module FaGithubSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGithubSquare";
});

module FaGithub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGithub";
});

module FaGitkraken = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGitkraken";
});

module FaGitlab = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGitlab";
});

module FaGitter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGitter";
});

module FaGlideG = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGlideG";
});

module FaGlide = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGlide";
});

module FaGofore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGofore";
});

module FaGoodreadsG = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGoodreadsG";
});

module FaGoodreads = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGoodreads";
});

module FaGoogleDrive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGoogleDrive";
});

module FaGooglePlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGooglePlay";
});

module FaGooglePlusG = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGooglePlusG";
});

module FaGooglePlusSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGooglePlusSquare";
});

module FaGooglePlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGooglePlus";
});

module FaGoogleWallet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGoogleWallet";
});

module FaGoogle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGoogle";
});

module FaGratipay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGratipay";
});

module FaGrav = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGrav";
});

module FaGripfire = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGripfire";
});

module FaGrunt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGrunt";
});

module FaGulp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGulp";
});

module FaHackerNewsSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHackerNewsSquare";
});

module FaHackerNews = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHackerNews";
});

module FaHips = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHips";
});

module FaHireAHelper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHireAHelper";
});

module FaHooli = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHooli";
});

module FaHotjar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHotjar";
});

module FaHouzz = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHouzz";
});

module FaHtml5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHtml5";
});

module FaHubspot = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHubspot";
});

module FaImdb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaImdb";
});

module FaInstagram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaInstagram";
});

module FaInternetExplorer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaInternetExplorer";
});

module FaIoxhost = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaIoxhost";
});

module FaItunesNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaItunesNote";
});

module FaItunes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaItunes";
});

module FaJava = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJava";
});

module FaJediOrder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJediOrder";
});

module FaJenkins = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJenkins";
});

module FaJoget = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJoget";
});

module FaJoomla = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJoomla";
});

module FaJsSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJsSquare";
});

module FaJs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJs";
});

module FaJsfiddle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaJsfiddle";
});

module FaKeybase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKeybase";
});

module FaKeycdn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKeycdn";
});

module FaKickstarterK = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKickstarterK";
});

module FaKickstarter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKickstarter";
});

module FaKorvue = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKorvue";
});

module FaLaravel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLaravel";
});

module FaLastfmSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLastfmSquare";
});

module FaLastfm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLastfm";
});

module FaLeanpub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLeanpub";
});

module FaLess = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLess";
});

module FaLine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLine";
});

module FaLinkedinIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLinkedinIn";
});

module FaLinkedin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLinkedin";
});

module FaLinode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLinode";
});

module FaLinux = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLinux";
});

module FaLyft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLyft";
});

module FaMagento = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMagento";
});

module FaMandalorian = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMandalorian";
});

module FaMastodon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMastodon";
});

module FaMaxcdn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMaxcdn";
});

module FaMedapps = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMedapps";
});

module FaMediumM = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMediumM";
});

module FaMedium = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMedium";
});

module FaMedrt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMedrt";
});

module FaMeetup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMeetup";
});

module FaMicrosoft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMicrosoft";
});

module FaMix = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMix";
});

module FaMixcloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMixcloud";
});

module FaMizuni = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMizuni";
});

module FaModx = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaModx";
});

module FaMonero = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMonero";
});

module FaNapster = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNapster";
});

module FaNintendoSwitch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNintendoSwitch";
});

module FaNodeJs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNodeJs";
});

module FaNode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNode";
});

module FaNpm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNpm";
});

module FaNs8 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNs8";
});

module FaNutritionix = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNutritionix";
});

module FaOdnoklassnikiSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOdnoklassnikiSquare";
});

module FaOdnoklassniki = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOdnoklassniki";
});

module FaOldRepublic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOldRepublic";
});

module FaOpencart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOpencart";
});

module FaOpenid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOpenid";
});

module FaOpera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOpera";
});

module FaOptinMonster = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOptinMonster";
});

module FaOsi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOsi";
});

module FaPage4 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPage4";
});

module FaPagelines = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPagelines";
});

module FaPalfed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPalfed";
});

module FaPatreon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPatreon";
});

module FaPaypal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPaypal";
});

module FaPeriscope = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPeriscope";
});

module FaPhabricator = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhabricator";
});

module FaPhoenixFramework = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhoenixFramework";
});

module FaPhoenixSquadron = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhoenixSquadron";
});

module FaPhp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhp";
});

module FaPiedPiperAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPiedPiperAlt";
});

module FaPiedPiperHat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPiedPiperHat";
});

module FaPiedPiperPp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPiedPiperPp";
});

module FaPiedPiper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPiedPiper";
});

module FaPinterestP = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPinterestP";
});

module FaPinterestSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPinterestSquare";
});

module FaPinterest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPinterest";
});

module FaPlaystation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlaystation";
});

module FaProductHunt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaProductHunt";
});

module FaPushed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPushed";
});

module FaPython = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPython";
});

module FaQq = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQq";
});

module FaQuinscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuinscape";
});

module FaQuora = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuora";
});

module FaRProject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRProject";
});

module FaR = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaR";
});

module FaRavelry = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRavelry";
});

module FaReact = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReact";
});

module FaReadme = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReadme";
});

module FaRebel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRebel";
});

module FaRedRiver = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRedRiver";
});

module FaRedditAlien = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRedditAlien";
});

module FaRedditSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRedditSquare";
});

module FaReddit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReddit";
});

module FaRendact = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRendact";
});

module FaRenren = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRenren";
});

module FaReplyd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReplyd";
});

module FaResearchgate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaResearchgate";
});

module FaResolving = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaResolving";
});

module FaRocketchat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRocketchat";
});

module FaRockrms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRockrms";
});

module FaSafari = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSafari";
});

module FaSass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSass";
});

module FaSchlix = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSchlix";
});

module FaScribd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaScribd";
});

module FaSearchengin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSearchengin";
});

module FaSellcast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSellcast";
});

module FaSellsy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSellsy";
});

module FaServicestack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaServicestack";
});

module FaShirtsinbulk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShirtsinbulk";
});

module FaSimplybuilt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSimplybuilt";
});

module FaSistrix = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSistrix";
});

module FaSith = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSith";
});

module FaSkyatlas = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSkyatlas";
});

module FaSkype = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSkype";
});

module FaSlackHash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSlackHash";
});

module FaSlack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSlack";
});

module FaSlideshare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSlideshare";
});

module FaSnapchatGhost = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSnapchatGhost";
});

module FaSnapchatSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSnapchatSquare";
});

module FaSnapchat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSnapchat";
});

module FaSoundcloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSoundcloud";
});

module FaSpeakap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSpeakap";
});

module FaSpotify = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSpotify";
});

module FaStackExchange = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStackExchange";
});

module FaStackOverflow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStackOverflow";
});

module FaStaylinked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStaylinked";
});

module FaSteamSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSteamSquare";
});

module FaSteamSymbol = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSteamSymbol";
});

module FaSteam = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSteam";
});

module FaStickerMule = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStickerMule";
});

module FaStrava = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStrava";
});

module FaStripeS = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStripeS";
});

module FaStripe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStripe";
});

module FaStudiovinari = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStudiovinari";
});

module FaStumbleuponCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStumbleuponCircle";
});

module FaStumbleupon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStumbleupon";
});

module FaSuperpowers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSuperpowers";
});

module FaSupple = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSupple";
});

module FaTeamspeak = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTeamspeak";
});

module FaTelegramPlane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTelegramPlane";
});

module FaTelegram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTelegram";
});

module FaTencentWeibo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTencentWeibo";
});

module FaThemeisle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThemeisle";
});

module FaTradeFederation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTradeFederation";
});

module FaTrello = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTrello";
});

module FaTripadvisor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTripadvisor";
});

module FaTumblrSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTumblrSquare";
});

module FaTumblr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTumblr";
});

module FaTwitch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTwitch";
});

module FaTwitterSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTwitterSquare";
});

module FaTwitter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTwitter";
});

module FaTypo3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTypo3";
});

module FaUber = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUber";
});

module FaUikit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUikit";
});

module FaUniregistry = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUniregistry";
});

module FaUntappd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUntappd";
});

module FaUsb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUsb";
});

module FaUssunnah = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUssunnah";
});

module FaVaadin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVaadin";
});

module FaViacoin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaViacoin";
});

module FaViadeoSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaViadeoSquare";
});

module FaViadeo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaViadeo";
});

module FaViber = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaViber";
});

module FaVimeoSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVimeoSquare";
});

module FaVimeoV = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVimeoV";
});

module FaVimeo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVimeo";
});

module FaVine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVine";
});

module FaVk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVk";
});

module FaVnv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVnv";
});

module FaVuejs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVuejs";
});

module FaWeibo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWeibo";
});

module FaWeixin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWeixin";
});

module FaWhatsappSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWhatsappSquare";
});

module FaWhatsapp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWhatsapp";
});

module FaWhmcs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWhmcs";
});

module FaWikipediaW = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWikipediaW";
});

module FaWindows = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWindows";
});

module FaWolfPackBattalion = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWolfPackBattalion";
});

module FaWordpressSimple = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWordpressSimple";
});

module FaWordpress = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWordpress";
});

module FaWpbeginner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWpbeginner";
});

module FaWpexplorer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWpexplorer";
});

module FaWpforms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWpforms";
});

module FaXbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaXbox";
});

module FaXingSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaXingSquare";
});

module FaXing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaXing";
});

module FaYCombinator = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYCombinator";
});

module FaYahoo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYahoo";
});

module FaYandexInternational = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYandexInternational";
});

module FaYandex = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYandex";
});

module FaYelp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYelp";
});

module FaYoast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYoast";
});

module FaYoutubeSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYoutubeSquare";
});

module FaYoutube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYoutube";
});

module FaAddressBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAddressBook";
});

module FaAddressCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAddressCard";
});

module FaAdjust = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAdjust";
});

module FaAlignCenter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAlignCenter";
});

module FaAlignJustify = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAlignJustify";
});

module FaAlignLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAlignLeft";
});

module FaAlignRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAlignRight";
});

module FaAllergies = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAllergies";
});

module FaAmbulance = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAmbulance";
});

module FaAmericanSignLanguageInterpreting = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAmericanSignLanguageInterpreting";
});

module FaAnchor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAnchor";
});

module FaAngleDoubleDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleDoubleDown";
});

module FaAngleDoubleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleDoubleLeft";
});

module FaAngleDoubleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleDoubleRight";
});

module FaAngleDoubleUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleDoubleUp";
});

module FaAngleDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleDown";
});

module FaAngleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleLeft";
});

module FaAngleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleRight";
});

module FaAngleUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAngleUp";
});

module FaArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArchive";
});

module FaArrowAltCircleDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowAltCircleDown";
});

module FaArrowAltCircleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowAltCircleLeft";
});

module FaArrowAltCircleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowAltCircleRight";
});

module FaArrowAltCircleUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowAltCircleUp";
});

module FaArrowCircleDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowCircleDown";
});

module FaArrowCircleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowCircleLeft";
});

module FaArrowCircleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowCircleRight";
});

module FaArrowCircleUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowCircleUp";
});

module FaArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowDown";
});

module FaArrowLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowLeft";
});

module FaArrowRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowRight";
});

module FaArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowUp";
});

module FaArrowsAltH = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowsAltH";
});

module FaArrowsAltV = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowsAltV";
});

module FaArrowsAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaArrowsAlt";
});

module FaAssistiveListeningSystems = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAssistiveListeningSystems";
});

module FaAsterisk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAsterisk";
});

module FaAt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAt";
});

module FaAudioDescription = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaAudioDescription";
});

module FaBackward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBackward";
});

module FaBalanceScale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBalanceScale";
});

module FaBan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBan";
});

module FaBandAid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBandAid";
});

module FaBarcode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBarcode";
});

module FaBars = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBars";
});

module FaBaseballBall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBaseballBall";
});

module FaBasketballBall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBasketballBall";
});

module FaBath = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBath";
});

module FaBatteryEmpty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBatteryEmpty";
});

module FaBatteryFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBatteryFull";
});

module FaBatteryHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBatteryHalf";
});

module FaBatteryQuarter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBatteryQuarter";
});

module FaBatteryThreeQuarters = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBatteryThreeQuarters";
});

module FaBed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBed";
});

module FaBeer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBeer";
});

module FaBellSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBellSlash";
});

module FaBell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBell";
});

module FaBicycle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBicycle";
});

module FaBinoculars = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBinoculars";
});

module FaBirthdayCake = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBirthdayCake";
});

module FaBlender = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBlender";
});

module FaBlind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBlind";
});

module FaBold = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBold";
});

module FaBolt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBolt";
});

module FaBomb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBomb";
});

module FaBookOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBookOpen";
});

module FaBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBook";
});

module FaBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBookmark";
});

module FaBowlingBall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBowlingBall";
});

module FaBoxOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBoxOpen";
});

module FaBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBox";
});

module FaBoxes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBoxes";
});

module FaBraille = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBraille";
});

module FaBriefcaseMedical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBriefcaseMedical";
});

module FaBriefcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBriefcase";
});

module FaBroadcastTower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBroadcastTower";
});

module FaBroom = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBroom";
});

module FaBug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBug";
});

module FaBuilding = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBuilding";
});

module FaBullhorn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBullhorn";
});

module FaBullseye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBullseye";
});

module FaBurn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBurn";
});

module FaBus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaBus";
});

module FaCalculator = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalculator";
});

module FaCalendarAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalendarAlt";
});

module FaCalendarCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalendarCheck";
});

module FaCalendarMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalendarMinus";
});

module FaCalendarPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalendarPlus";
});

module FaCalendarTimes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalendarTimes";
});

module FaCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCalendar";
});

module FaCameraRetro = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCameraRetro";
});

module FaCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCamera";
});

module FaCapsules = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCapsules";
});

module FaCar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCar";
});

module FaCaretDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretDown";
});

module FaCaretLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretLeft";
});

module FaCaretRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretRight";
});

module FaCaretSquareDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretSquareDown";
});

module FaCaretSquareLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretSquareLeft";
});

module FaCaretSquareRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretSquareRight";
});

module FaCaretSquareUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretSquareUp";
});

module FaCaretUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCaretUp";
});

module FaCartArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCartArrowDown";
});

module FaCartPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCartPlus";
});

module FaCertificate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCertificate";
});

module FaChalkboardTeacher = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChalkboardTeacher";
});

module FaChalkboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChalkboard";
});

module FaChartArea = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChartArea";
});

module FaChartBar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChartBar";
});

module FaChartLine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChartLine";
});

module FaChartPie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChartPie";
});

module FaCheckCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCheckCircle";
});

module FaCheckSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCheckSquare";
});

module FaCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCheck";
});

module FaChessBishop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessBishop";
});

module FaChessBoard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessBoard";
});

module FaChessKing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessKing";
});

module FaChessKnight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessKnight";
});

module FaChessPawn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessPawn";
});

module FaChessQueen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessQueen";
});

module FaChessRook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChessRook";
});

module FaChess = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChess";
});

module FaChevronCircleDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronCircleDown";
});

module FaChevronCircleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronCircleLeft";
});

module FaChevronCircleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronCircleRight";
});

module FaChevronCircleUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronCircleUp";
});

module FaChevronDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronDown";
});

module FaChevronLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronLeft";
});

module FaChevronRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronRight";
});

module FaChevronUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChevronUp";
});

module FaChild = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChild";
});

module FaChurch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaChurch";
});

module FaCircleNotch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCircleNotch";
});

module FaCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCircle";
});

module FaClipboardCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaClipboardCheck";
});

module FaClipboardList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaClipboardList";
});

module FaClipboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaClipboard";
});

module FaClock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaClock";
});

module FaClone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaClone";
});

module FaClosedCaptioning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaClosedCaptioning";
});

module FaCloudDownloadAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCloudDownloadAlt";
});

module FaCloudUploadAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCloudUploadAlt";
});

module FaCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCloud";
});

module FaCodeBranch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCodeBranch";
});

module FaCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCode";
});

module FaCoffee = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCoffee";
});

module FaCog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCog";
});

module FaCogs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCogs";
});

module FaCoins = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCoins";
});

module FaColumns = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaColumns";
});

module FaCommentAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCommentAlt";
});

module FaCommentDots = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCommentDots";
});

module FaCommentSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCommentSlash";
});

module FaComment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaComment";
});

module FaComments = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaComments";
});

module FaCompactDisc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCompactDisc";
});

module FaCompass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCompass";
});

module FaCompress = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCompress";
});

module FaCopy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCopy";
});

module FaCopyright = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCopyright";
});

module FaCouch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCouch";
});

module FaCreditCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCreditCard";
});

module FaCrop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCrop";
});

module FaCrosshairs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCrosshairs";
});

module FaCrow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCrow";
});

module FaCrown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCrown";
});

module FaCube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCube";
});

module FaCubes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCubes";
});

module FaCut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaCut";
});

module FaDatabase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDatabase";
});

module FaDeaf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDeaf";
});

module FaDesktop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDesktop";
});

module FaDiagnoses = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiagnoses";
});

module FaDiceFive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiceFive";
});

module FaDiceFour = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiceFour";
});

module FaDiceOne = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiceOne";
});

module FaDiceSix = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiceSix";
});

module FaDiceThree = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiceThree";
});

module FaDiceTwo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDiceTwo";
});

module FaDice = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDice";
});

module FaDivide = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDivide";
});

module FaDna = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDna";
});

module FaDollarSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDollarSign";
});

module FaDollyFlatbed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDollyFlatbed";
});

module FaDolly = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDolly";
});

module FaDonate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDonate";
});

module FaDoorClosed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDoorClosed";
});

module FaDoorOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDoorOpen";
});

module FaDotCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDotCircle";
});

module FaDove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDove";
});

module FaDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDownload";
});

module FaDumbbell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaDumbbell";
});

module FaEdit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEdit";
});

module FaEject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEject";
});

module FaEllipsisH = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEllipsisH";
});

module FaEllipsisV = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEllipsisV";
});

module FaEnvelopeOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEnvelopeOpen";
});

module FaEnvelopeSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEnvelopeSquare";
});

module FaEnvelope = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEnvelope";
});

module FaEquals = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEquals";
});

module FaEraser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEraser";
});

module FaEuroSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEuroSign";
});

module FaExchangeAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExchangeAlt";
});

module FaExclamationCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExclamationCircle";
});

module FaExclamationTriangle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExclamationTriangle";
});

module FaExclamation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExclamation";
});

module FaExpandArrowsAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExpandArrowsAlt";
});

module FaExpand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExpand";
});

module FaExternalLinkAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExternalLinkAlt";
});

module FaExternalLinkSquareAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaExternalLinkSquareAlt";
});

module FaEyeDropper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEyeDropper";
});

module FaEyeSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEyeSlash";
});

module FaEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaEye";
});

module FaFastBackward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFastBackward";
});

module FaFastForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFastForward";
});

module FaFax = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFax";
});

module FaFeather = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFeather";
});

module FaFemale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFemale";
});

module FaFighterJet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFighterJet";
});

module FaFileAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileAlt";
});

module FaFileArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileArchive";
});

module FaFileAudio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileAudio";
});

module FaFileCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileCode";
});

module FaFileExcel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileExcel";
});

module FaFileImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileImage";
});

module FaFileMedicalAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileMedicalAlt";
});

module FaFileMedical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileMedical";
});

module FaFilePdf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFilePdf";
});

module FaFilePowerpoint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFilePowerpoint";
});

module FaFileVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileVideo";
});

module FaFileWord = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFileWord";
});

module FaFile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFile";
});

module FaFilm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFilm";
});

module FaFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFilter";
});

module FaFireExtinguisher = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFireExtinguisher";
});

module FaFire = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFire";
});

module FaFirstAid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFirstAid";
});

module FaFlagCheckered = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFlagCheckered";
});

module FaFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFlag";
});

module FaFlask = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFlask";
});

module FaFolderOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFolderOpen";
});

module FaFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFolder";
});

module FaFont = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFont";
});

module FaFootballBall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFootballBall";
});

module FaForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaForward";
});

module FaFrog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFrog";
});

module FaFrown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFrown";
});

module FaFutbol = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaFutbol";
});

module FaGamepad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGamepad";
});

module FaGasPump = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGasPump";
});

module FaGavel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGavel";
});

module FaGem = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGem";
});

module FaGenderless = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGenderless";
});

module FaGift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGift";
});

module FaGlassMartini = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGlassMartini";
});

module FaGlasses = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGlasses";
});

module FaGlobe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGlobe";
});

module FaGolfBall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGolfBall";
});

module FaGraduationCap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGraduationCap";
});

module FaGreaterThanEqual = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGreaterThanEqual";
});

module FaGreaterThan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaGreaterThan";
});

module FaHSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHSquare";
});

module FaHandHoldingHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandHoldingHeart";
});

module FaHandHoldingUsd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandHoldingUsd";
});

module FaHandHolding = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandHolding";
});

module FaHandLizard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandLizard";
});

module FaHandPaper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPaper";
});

module FaHandPeace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPeace";
});

module FaHandPointDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPointDown";
});

module FaHandPointLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPointLeft";
});

module FaHandPointRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPointRight";
});

module FaHandPointUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPointUp";
});

module FaHandPointer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandPointer";
});

module FaHandRock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandRock";
});

module FaHandScissors = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandScissors";
});

module FaHandSpock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandSpock";
});

module FaHandsHelping = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandsHelping";
});

module FaHands = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHands";
});

module FaHandshake = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHandshake";
});

module FaHashtag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHashtag";
});

module FaHdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHdd";
});

module FaHeading = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHeading";
});

module FaHeadphones = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHeadphones";
});

module FaHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHeart";
});

module FaHeartbeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHeartbeat";
});

module FaHelicopter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHelicopter";
});

module FaHistory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHistory";
});

module FaHockeyPuck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHockeyPuck";
});

module FaHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHome";
});

module FaHospitalAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHospitalAlt";
});

module FaHospitalSymbol = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHospitalSymbol";
});

module FaHospital = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHospital";
});

module FaHourglassEnd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHourglassEnd";
});

module FaHourglassHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHourglassHalf";
});

module FaHourglassStart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHourglassStart";
});

module FaHourglass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaHourglass";
});

module FaICursor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaICursor";
});

module FaIdBadge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaIdBadge";
});

module FaIdCardAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaIdCardAlt";
});

module FaIdCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaIdCard";
});

module FaImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaImage";
});

module FaImages = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaImages";
});

module FaInbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaInbox";
});

module FaIndent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaIndent";
});

module FaIndustry = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaIndustry";
});

module FaInfinity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaInfinity";
});

module FaInfoCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaInfoCircle";
});

module FaInfo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaInfo";
});

module FaItalic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaItalic";
});

module FaKey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKey";
});

module FaKeyboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKeyboard";
});

module FaKiwiBird = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaKiwiBird";
});

module FaLanguage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLanguage";
});

module FaLaptop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLaptop";
});

module FaLeaf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLeaf";
});

module FaLemon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLemon";
});

module FaLessThanEqual = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLessThanEqual";
});

module FaLessThan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLessThan";
});

module FaLevelDownAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLevelDownAlt";
});

module FaLevelUpAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLevelUpAlt";
});

module FaLifeRing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLifeRing";
});

module FaLightbulb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLightbulb";
});

module FaLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLink";
});

module FaLiraSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLiraSign";
});

module FaListAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaListAlt";
});

module FaListOl = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaListOl";
});

module FaListUl = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaListUl";
});

module FaList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaList";
});

module FaLocationArrow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLocationArrow";
});

module FaLockOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLockOpen";
});

module FaLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLock";
});

module FaLongArrowAltDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLongArrowAltDown";
});

module FaLongArrowAltLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLongArrowAltLeft";
});

module FaLongArrowAltRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLongArrowAltRight";
});

module FaLongArrowAltUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLongArrowAltUp";
});

module FaLowVision = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaLowVision";
});

module FaMagic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMagic";
});

module FaMagnet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMagnet";
});

module FaMale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMale";
});

module FaMapMarkerAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMapMarkerAlt";
});

module FaMapMarker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMapMarker";
});

module FaMapPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMapPin";
});

module FaMapSigns = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMapSigns";
});

module FaMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMap";
});

module FaMarsDouble = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMarsDouble";
});

module FaMarsStrokeH = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMarsStrokeH";
});

module FaMarsStrokeV = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMarsStrokeV";
});

module FaMarsStroke = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMarsStroke";
});

module FaMars = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMars";
});

module FaMedkit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMedkit";
});

module FaMeh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMeh";
});

module FaMemory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMemory";
});

module FaMercury = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMercury";
});

module FaMicrochip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMicrochip";
});

module FaMicrophoneAltSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMicrophoneAltSlash";
});

module FaMicrophoneAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMicrophoneAlt";
});

module FaMicrophoneSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMicrophoneSlash";
});

module FaMicrophone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMicrophone";
});

module FaMinusCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMinusCircle";
});

module FaMinusSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMinusSquare";
});

module FaMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMinus";
});

module FaMobileAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMobileAlt";
});

module FaMobile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMobile";
});

module FaMoneyBillAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoneyBillAlt";
});

module FaMoneyBillWaveAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoneyBillWaveAlt";
});

module FaMoneyBillWave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoneyBillWave";
});

module FaMoneyBill = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoneyBill";
});

module FaMoneyCheckAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoneyCheckAlt";
});

module FaMoneyCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoneyCheck";
});

module FaMoon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMoon";
});

module FaMotorcycle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMotorcycle";
});

module FaMousePointer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMousePointer";
});

module FaMusic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaMusic";
});

module FaNeuter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNeuter";
});

module FaNewspaper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNewspaper";
});

module FaNotEqual = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNotEqual";
});

module FaNotesMedical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaNotesMedical";
});

module FaObjectGroup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaObjectGroup";
});

module FaObjectUngroup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaObjectUngroup";
});

module FaOutdent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaOutdent";
});

module FaPaintBrush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPaintBrush";
});

module FaPalette = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPalette";
});

module FaPallet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPallet";
});

module FaPaperPlane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPaperPlane";
});

module FaPaperclip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPaperclip";
});

module FaParachuteBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaParachuteBox";
});

module FaParagraph = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaParagraph";
});

module FaParking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaParking";
});

module FaPaste = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPaste";
});

module FaPauseCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPauseCircle";
});

module FaPause = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPause";
});

module FaPaw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPaw";
});

module FaPenSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPenSquare";
});

module FaPencilAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPencilAlt";
});

module FaPeopleCarry = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPeopleCarry";
});

module FaPercent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPercent";
});

module FaPercentage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPercentage";
});

module FaPhoneSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhoneSlash";
});

module FaPhoneSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhoneSquare";
});

module FaPhoneVolume = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhoneVolume";
});

module FaPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPhone";
});

module FaPiggyBank = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPiggyBank";
});

module FaPills = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPills";
});

module FaPlane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlane";
});

module FaPlayCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlayCircle";
});

module FaPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlay";
});

module FaPlug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlug";
});

module FaPlusCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlusCircle";
});

module FaPlusSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlusSquare";
});

module FaPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPlus";
});

module FaPodcast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPodcast";
});

module FaPoo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPoo";
});

module FaPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPortrait";
});

module FaPoundSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPoundSign";
});

module FaPowerOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPowerOff";
});

module FaPrescriptionBottleAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPrescriptionBottleAlt";
});

module FaPrescriptionBottle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPrescriptionBottle";
});

module FaPrint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPrint";
});

module FaProcedures = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaProcedures";
});

module FaProjectDiagram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaProjectDiagram";
});

module FaPuzzlePiece = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaPuzzlePiece";
});

module FaQrcode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQrcode";
});

module FaQuestionCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuestionCircle";
});

module FaQuestion = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuestion";
});

module FaQuidditch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuidditch";
});

module FaQuoteLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuoteLeft";
});

module FaQuoteRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaQuoteRight";
});

module FaRandom = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRandom";
});

module FaReceipt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReceipt";
});

module FaRecycle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRecycle";
});

module FaRedoAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRedoAlt";
});

module FaRedo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRedo";
});

module FaRegistered = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRegistered";
});

module FaReplyAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReplyAll";
});

module FaReply = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaReply";
});

module FaRetweet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRetweet";
});

module FaRibbon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRibbon";
});

module FaRoad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRoad";
});

module FaRobot = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRobot";
});

module FaRocket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRocket";
});

module FaRssSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRssSquare";
});

module FaRss = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRss";
});

module FaRubleSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRubleSign";
});

module FaRulerCombined = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRulerCombined";
});

module FaRulerHorizontal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRulerHorizontal";
});

module FaRulerVertical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRulerVertical";
});

module FaRuler = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRuler";
});

module FaRupeeSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaRupeeSign";
});

module FaSave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSave";
});

module FaSchool = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSchool";
});

module FaScrewdriver = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaScrewdriver";
});

module FaSearchMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSearchMinus";
});

module FaSearchPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSearchPlus";
});

module FaSearch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSearch";
});

module FaSeedling = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSeedling";
});

module FaServer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaServer";
});

module FaShareAltSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShareAltSquare";
});

module FaShareAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShareAlt";
});

module FaShareSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShareSquare";
});

module FaShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShare";
});

module FaShekelSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShekelSign";
});

module FaShieldAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShieldAlt";
});

module FaShip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShip";
});

module FaShippingFast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShippingFast";
});

module FaShoePrints = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShoePrints";
});

module FaShoppingBag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShoppingBag";
});

module FaShoppingBasket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShoppingBasket";
});

module FaShoppingCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShoppingCart";
});

module FaShower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaShower";
});

module FaSignInAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSignInAlt";
});

module FaSignLanguage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSignLanguage";
});

module FaSignOutAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSignOutAlt";
});

module FaSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSign";
});

module FaSignal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSignal";
});

module FaSitemap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSitemap";
});

module FaSkull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSkull";
});

module FaSlidersH = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSlidersH";
});

module FaSmile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSmile";
});

module FaSmokingBan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSmokingBan";
});

module FaSmoking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSmoking";
});

module FaSnowflake = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSnowflake";
});

module FaSortAlphaDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortAlphaDown";
});

module FaSortAlphaUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortAlphaUp";
});

module FaSortAmountDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortAmountDown";
});

module FaSortAmountUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortAmountUp";
});

module FaSortDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortDown";
});

module FaSortNumericDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortNumericDown";
});

module FaSortNumericUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortNumericUp";
});

module FaSortUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSortUp";
});

module FaSort = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSort";
});

module FaSpaceShuttle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSpaceShuttle";
});

module FaSpinner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSpinner";
});

module FaSquareFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSquareFull";
});

module FaSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSquare";
});

module FaStarHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStarHalf";
});

module FaStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStar";
});

module FaStepBackward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStepBackward";
});

module FaStepForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStepForward";
});

module FaStethoscope = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStethoscope";
});

module FaStickyNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStickyNote";
});

module FaStopCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStopCircle";
});

module FaStop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStop";
});

module FaStopwatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStopwatch";
});

module FaStoreAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStoreAlt";
});

module FaStore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStore";
});

module FaStream = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStream";
});

module FaStreetView = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStreetView";
});

module FaStrikethrough = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStrikethrough";
});

module FaStroopwafel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaStroopwafel";
});

module FaSubscript = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSubscript";
});

module FaSubway = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSubway";
});

module FaSuitcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSuitcase";
});

module FaSun = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSun";
});

module FaSuperscript = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSuperscript";
});

module FaSyncAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSyncAlt";
});

module FaSync = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSync";
});

module FaSyringe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaSyringe";
});

module FaTableTennis = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTableTennis";
});

module FaTable = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTable";
});

module FaTabletAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTabletAlt";
});

module FaTablet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTablet";
});

module FaTablets = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTablets";
});

module FaTachometerAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTachometerAlt";
});

module FaTag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTag";
});

module FaTags = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTags";
});

module FaTape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTape";
});

module FaTasks = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTasks";
});

module FaTaxi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTaxi";
});

module FaTerminal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTerminal";
});

module FaTextHeight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTextHeight";
});

module FaTextWidth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTextWidth";
});

module FaThLarge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThLarge";
});

module FaThList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThList";
});

module FaTh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTh";
});

module FaThermometerEmpty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThermometerEmpty";
});

module FaThermometerFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThermometerFull";
});

module FaThermometerHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThermometerHalf";
});

module FaThermometerQuarter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThermometerQuarter";
});

module FaThermometerThreeQuarters = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThermometerThreeQuarters";
});

module FaThermometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThermometer";
});

module FaThumbsDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThumbsDown";
});

module FaThumbsUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThumbsUp";
});

module FaThumbtack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaThumbtack";
});

module FaTicketAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTicketAlt";
});

module FaTimesCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTimesCircle";
});

module FaTimes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTimes";
});

module FaTint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTint";
});

module FaToggleOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaToggleOff";
});

module FaToggleOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaToggleOn";
});

module FaToolbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaToolbox";
});

module FaTrademark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTrademark";
});

module FaTrain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTrain";
});

module FaTransgenderAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTransgenderAlt";
});

module FaTransgender = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTransgender";
});

module FaTrashAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTrashAlt";
});

module FaTrash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTrash";
});

module FaTree = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTree";
});

module FaTrophy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTrophy";
});

module FaTruckLoading = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTruckLoading";
});

module FaTruckMoving = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTruckMoving";
});

module FaTruck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTruck";
});

module FaTshirt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTshirt";
});

module FaTty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTty";
});

module FaTv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaTv";
});

module FaUmbrella = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUmbrella";
});

module FaUnderline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUnderline";
});

module FaUndoAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUndoAlt";
});

module FaUndo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUndo";
});

module FaUniversalAccess = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUniversalAccess";
});

module FaUniversity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUniversity";
});

module FaUnlink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUnlink";
});

module FaUnlockAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUnlockAlt";
});

module FaUnlock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUnlock";
});

module FaUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUpload";
});

module FaUserAltSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserAltSlash";
});

module FaUserAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserAlt";
});

module FaUserAstronaut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserAstronaut";
});

module FaUserCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserCheck";
});

module FaUserCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserCircle";
});

module FaUserClock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserClock";
});

module FaUserCog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserCog";
});

module FaUserEdit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserEdit";
});

module FaUserFriends = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserFriends";
});

module FaUserGraduate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserGraduate";
});

module FaUserLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserLock";
});

module FaUserMd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserMd";
});

module FaUserMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserMinus";
});

module FaUserNinja = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserNinja";
});

module FaUserPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserPlus";
});

module FaUserSecret = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserSecret";
});

module FaUserShield = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserShield";
});

module FaUserSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserSlash";
});

module FaUserTag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserTag";
});

module FaUserTie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserTie";
});

module FaUserTimes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUserTimes";
});

module FaUser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUser";
});

module FaUsersCog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUsersCog";
});

module FaUsers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUsers";
});

module FaUtensilSpoon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUtensilSpoon";
});

module FaUtensils = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaUtensils";
});

module FaVenusDouble = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVenusDouble";
});

module FaVenusMars = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVenusMars";
});

module FaVenus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVenus";
});

module FaVial = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVial";
});

module FaVials = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVials";
});

module FaVideoSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVideoSlash";
});

module FaVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVideo";
});

module FaVolleyballBall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVolleyballBall";
});

module FaVolumeDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVolumeDown";
});

module FaVolumeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVolumeOff";
});

module FaVolumeUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaVolumeUp";
});

module FaWalking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWalking";
});

module FaWallet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWallet";
});

module FaWarehouse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWarehouse";
});

module FaWeight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWeight";
});

module FaWheelchair = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWheelchair";
});

module FaWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWifi";
});

module FaWindowClose = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWindowClose";
});

module FaWindowMaximize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWindowMaximize";
});

module FaWindowMinimize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWindowMinimize";
});

module FaWindowRestore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWindowRestore";
});

module FaWineGlass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWineGlass";
});

module FaWonSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWonSign";
});

module FaWrench = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaWrench";
});

module FaXRay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaXRay";
});

module FaYenSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fa"] 
  external reactClass : ReasonReact.reactClass = "FaYenSign";
});

module IoIosAddCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAddCircleOutline";
});

module IoIosAddCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAddCircle";
});

module IoIosAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAdd";
});

module IoIosAirplane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAirplane";
});

module IoIosAlarm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAlarm";
});

module IoIosAlbums = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAlbums";
});

module IoIosAlert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAlert";
});

module IoIosAmericanFootball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAmericanFootball";
});

module IoIosAnalytics = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAnalytics";
});

module IoIosAperture = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAperture";
});

module IoIosApps = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosApps";
});

module IoIosAppstore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAppstore";
});

module IoIosArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArchive";
});

module IoIosArrowBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowBack";
});

module IoIosArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDown";
});

module IoIosArrowDropdownCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropdownCircle";
});

module IoIosArrowDropdown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropdown";
});

module IoIosArrowDropleftCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropleftCircle";
});

module IoIosArrowDropleft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropleft";
});

module IoIosArrowDroprightCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDroprightCircle";
});

module IoIosArrowDropright = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropright";
});

module IoIosArrowDropupCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropupCircle";
});

module IoIosArrowDropup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowDropup";
});

module IoIosArrowForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowForward";
});

module IoIosArrowRoundBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowRoundBack";
});

module IoIosArrowRoundDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowRoundDown";
});

module IoIosArrowRoundForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowRoundForward";
});

module IoIosArrowRoundUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowRoundUp";
});

module IoIosArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosArrowUp";
});

module IoIosAt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAt";
});

module IoIosAttach = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosAttach";
});

module IoIosBackspace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBackspace";
});

module IoIosBarcode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBarcode";
});

module IoIosBaseball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBaseball";
});

module IoIosBasket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBasket";
});

module IoIosBasketball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBasketball";
});

module IoIosBatteryCharging = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBatteryCharging";
});

module IoIosBatteryDead = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBatteryDead";
});

module IoIosBatteryFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBatteryFull";
});

module IoIosBeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBeaker";
});

module IoIosBed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBed";
});

module IoIosBeer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBeer";
});

module IoIosBicycle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBicycle";
});

module IoIosBluetooth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBluetooth";
});

module IoIosBoat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBoat";
});

module IoIosBody = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBody";
});

module IoIosBonfire = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBonfire";
});

module IoIosBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBook";
});

module IoIosBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBookmark";
});

module IoIosBookmarks = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBookmarks";
});

module IoIosBowtie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBowtie";
});

module IoIosBriefcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBriefcase";
});

module IoIosBrowsers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBrowsers";
});

module IoIosBrush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBrush";
});

module IoIosBug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBug";
});

module IoIosBuild = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBuild";
});

module IoIosBulb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBulb";
});

module IoIosBus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBus";
});

module IoIosBusiness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosBusiness";
});

module IoIosCafe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCafe";
});

module IoIosCalculator = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCalculator";
});

module IoIosCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCalendar";
});

module IoIosCall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCall";
});

module IoIosCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCamera";
});

module IoIosCar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCar";
});

module IoIosCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCard";
});

module IoIosCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCart";
});

module IoIosCash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCash";
});

module IoIosCellular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCellular";
});

module IoIosChatboxes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosChatboxes";
});

module IoIosChatbubbles = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosChatbubbles";
});

module IoIosCheckboxOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCheckboxOutline";
});

module IoIosCheckbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCheckbox";
});

module IoIosCheckmarkCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCheckmarkCircleOutline";
});

module IoIosCheckmarkCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCheckmarkCircle";
});

module IoIosCheckmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCheckmark";
});

module IoIosClipboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosClipboard";
});

module IoIosClock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosClock";
});

module IoIosCloseCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloseCircleOutline";
});

module IoIosCloseCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloseCircle";
});

module IoIosClose = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosClose";
});

module IoIosCloudCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudCircle";
});

module IoIosCloudDone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudDone";
});

module IoIosCloudDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudDownload";
});

module IoIosCloudOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudOutline";
});

module IoIosCloudUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudUpload";
});

module IoIosCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloud";
});

module IoIosCloudyNight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudyNight";
});

module IoIosCloudy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCloudy";
});

module IoIosCodeDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCodeDownload";
});

module IoIosCodeWorking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCodeWorking";
});

module IoIosCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCode";
});

module IoIosCog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCog";
});

module IoIosColorFill = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosColorFill";
});

module IoIosColorFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosColorFilter";
});

module IoIosColorPalette = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosColorPalette";
});

module IoIosColorWand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosColorWand";
});

module IoIosCompass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCompass";
});

module IoIosConstruct = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosConstruct";
});

module IoIosContact = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosContact";
});

module IoIosContacts = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosContacts";
});

module IoIosContract = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosContract";
});

module IoIosContrast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosContrast";
});

module IoIosCopy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCopy";
});

module IoIosCreate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCreate";
});

module IoIosCrop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCrop";
});

module IoIosCube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCube";
});

module IoIosCut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosCut";
});

module IoIosDesktop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosDesktop";
});

module IoIosDisc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosDisc";
});

module IoIosDocument = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosDocument";
});

module IoIosDoneAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosDoneAll";
});

module IoIosDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosDownload";
});

module IoIosEasel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosEasel";
});

module IoIosEgg = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosEgg";
});

module IoIosExit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosExit";
});

module IoIosExpand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosExpand";
});

module IoIosEyeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosEyeOff";
});

module IoIosEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosEye";
});

module IoIosFastforward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFastforward";
});

module IoIosFemale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFemale";
});

module IoIosFiling = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFiling";
});

module IoIosFilm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFilm";
});

module IoIosFingerPrint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFingerPrint";
});

module IoIosFitness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFitness";
});

module IoIosFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlag";
});

module IoIosFlame = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlame";
});

module IoIosFlashOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlashOff";
});

module IoIosFlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlash";
});

module IoIosFlashlight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlashlight";
});

module IoIosFlask = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlask";
});

module IoIosFlower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFlower";
});

module IoIosFolderOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFolderOpen";
});

module IoIosFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFolder";
});

module IoIosFootball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFootball";
});

module IoIosFunnel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosFunnel";
});

module IoIosGift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGift";
});

module IoIosGitBranch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGitBranch";
});

module IoIosGitCommit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGitCommit";
});

module IoIosGitCompare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGitCompare";
});

module IoIosGitMerge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGitMerge";
});

module IoIosGitNetwork = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGitNetwork";
});

module IoIosGitPullRequest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGitPullRequest";
});

module IoIosGlasses = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGlasses";
});

module IoIosGlobe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGlobe";
});

module IoIosGrid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosGrid";
});

module IoIosHammer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHammer";
});

module IoIosHand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHand";
});

module IoIosHappy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHappy";
});

module IoIosHeadset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHeadset";
});

module IoIosHeartDislike = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHeartDislike";
});

module IoIosHeartEmpty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHeartEmpty";
});

module IoIosHeartHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHeartHalf";
});

module IoIosHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHeart";
});

module IoIosHelpBuoy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHelpBuoy";
});

module IoIosHelpCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHelpCircleOutline";
});

module IoIosHelpCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHelpCircle";
});

module IoIosHelp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHelp";
});

module IoIosHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHome";
});

module IoIosHourglass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosHourglass";
});

module IoIosIceCream = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosIceCream";
});

module IoIosImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosImage";
});

module IoIosImages = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosImages";
});

module IoIosInfinite = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosInfinite";
});

module IoIosInformationCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosInformationCircleOutline";
});

module IoIosInformationCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosInformationCircle";
});

module IoIosInformation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosInformation";
});

module IoIosJet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosJet";
});

module IoIosJournal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosJournal";
});

module IoIosKey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosKey";
});

module IoIosKeypad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosKeypad";
});

module IoIosLaptop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLaptop";
});

module IoIosLeaf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLeaf";
});

module IoIosLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLink";
});

module IoIosListBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosListBox";
});

module IoIosList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosList";
});

module IoIosLocate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLocate";
});

module IoIosLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLock";
});

module IoIosLogIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLogIn";
});

module IoIosLogOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosLogOut";
});

module IoIosMagnet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMagnet";
});

module IoIosMailOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMailOpen";
});

module IoIosMailUnread = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMailUnread";
});

module IoIosMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMail";
});

module IoIosMale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMale";
});

module IoIosMan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMan";
});

module IoIosMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMap";
});

module IoIosMedal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMedal";
});

module IoIosMedical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMedical";
});

module IoIosMedkit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMedkit";
});

module IoIosMegaphone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMegaphone";
});

module IoIosMenu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMenu";
});

module IoIosMicOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMicOff";
});

module IoIosMic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMic";
});

module IoIosMicrophone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMicrophone";
});

module IoIosMoon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMoon";
});

module IoIosMore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMore";
});

module IoIosMove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMove";
});

module IoIosMusicalNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMusicalNote";
});

module IoIosMusicalNotes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosMusicalNotes";
});

module IoIosNavigate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosNavigate";
});

module IoIosNotificationsOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosNotificationsOff";
});

module IoIosNotificationsOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosNotificationsOutline";
});

module IoIosNotifications = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosNotifications";
});

module IoIosNuclear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosNuclear";
});

module IoIosNutrition = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosNutrition";
});

module IoIosOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosOpen";
});

module IoIosOptions = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosOptions";
});

module IoIosOutlet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosOutlet";
});

module IoIosPaperPlane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPaperPlane";
});

module IoIosPaper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPaper";
});

module IoIosPartlySunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPartlySunny";
});

module IoIosPause = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPause";
});

module IoIosPaw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPaw";
});

module IoIosPeople = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPeople";
});

module IoIosPersonAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPersonAdd";
});

module IoIosPerson = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPerson";
});

module IoIosPhoneLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPhoneLandscape";
});

module IoIosPhonePortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPhonePortrait";
});

module IoIosPhotos = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPhotos";
});

module IoIosPie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPie";
});

module IoIosPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPin";
});

module IoIosPint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPint";
});

module IoIosPizza = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPizza";
});

module IoIosPlanet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPlanet";
});

module IoIosPlayCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPlayCircle";
});

module IoIosPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPlay";
});

module IoIosPodium = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPodium";
});

module IoIosPower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPower";
});

module IoIosPricetag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPricetag";
});

module IoIosPricetags = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPricetags";
});

module IoIosPrint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPrint";
});

module IoIosPulse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosPulse";
});

module IoIosQrScanner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosQrScanner";
});

module IoIosQuote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosQuote";
});

module IoIosRadioButtonOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRadioButtonOff";
});

module IoIosRadioButtonOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRadioButtonOn";
});

module IoIosRadio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRadio";
});

module IoIosRainy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRainy";
});

module IoIosRecording = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRecording";
});

module IoIosRedo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRedo";
});

module IoIosRefreshCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRefreshCircle";
});

module IoIosRefresh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRefresh";
});

module IoIosRemoveCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRemoveCircleOutline";
});

module IoIosRemoveCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRemoveCircle";
});

module IoIosRemove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRemove";
});

module IoIosReorder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosReorder";
});

module IoIosRepeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRepeat";
});

module IoIosResize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosResize";
});

module IoIosRestaurant = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRestaurant";
});

module IoIosReturnLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosReturnLeft";
});

module IoIosReturnRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosReturnRight";
});

module IoIosReverseCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosReverseCamera";
});

module IoIosRewind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRewind";
});

module IoIosRibbon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRibbon";
});

module IoIosRocket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRocket";
});

module IoIosRose = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosRose";
});

module IoIosSad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSad";
});

module IoIosSave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSave";
});

module IoIosSchool = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSchool";
});

module IoIosSearch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSearch";
});

module IoIosSend = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSend";
});

module IoIosSettings = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSettings";
});

module IoIosShareAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosShareAlt";
});

module IoIosShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosShare";
});

module IoIosShirt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosShirt";
});

module IoIosShuffle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosShuffle";
});

module IoIosSkipBackward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSkipBackward";
});

module IoIosSkipForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSkipForward";
});

module IoIosSnow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSnow";
});

module IoIosSpeedometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSpeedometer";
});

module IoIosSquareOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSquareOutline";
});

module IoIosSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSquare";
});

module IoIosStarHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosStarHalf";
});

module IoIosStarOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosStarOutline";
});

module IoIosStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosStar";
});

module IoIosStats = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosStats";
});

module IoIosStopwatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosStopwatch";
});

module IoIosSubway = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSubway";
});

module IoIosSunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSunny";
});

module IoIosSwap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSwap";
});

module IoIosSwitch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSwitch";
});

module IoIosSync = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosSync";
});

module IoIosTabletLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTabletLandscape";
});

module IoIosTabletPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTabletPortrait";
});

module IoIosTennisball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTennisball";
});

module IoIosText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosText";
});

module IoIosThermometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosThermometer";
});

module IoIosThumbsDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosThumbsDown";
});

module IoIosThumbsUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosThumbsUp";
});

module IoIosThunderstorm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosThunderstorm";
});

module IoIosTime = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTime";
});

module IoIosTimer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTimer";
});

module IoIosToday = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosToday";
});

module IoIosTrain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTrain";
});

module IoIosTransgender = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTransgender";
});

module IoIosTrash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTrash";
});

module IoIosTrendingDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTrendingDown";
});

module IoIosTrendingUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTrendingUp";
});

module IoIosTrophy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTrophy";
});

module IoIosTv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosTv";
});

module IoIosUmbrella = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosUmbrella";
});

module IoIosUndo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosUndo";
});

module IoIosUnlock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosUnlock";
});

module IoIosVideocam = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosVideocam";
});

module IoIosVolumeHigh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosVolumeHigh";
});

module IoIosVolumeLow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosVolumeLow";
});

module IoIosVolumeMute = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosVolumeMute";
});

module IoIosVolumeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosVolumeOff";
});

module IoIosWalk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWalk";
});

module IoIosWallet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWallet";
});

module IoIosWarning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWarning";
});

module IoIosWatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWatch";
});

module IoIosWater = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWater";
});

module IoIosWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWifi";
});

module IoIosWine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWine";
});

module IoIosWoman = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoIosWoman";
});

module IoLogoAndroid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoAndroid";
});

module IoLogoAngular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoAngular";
});

module IoLogoApple = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoApple";
});

module IoLogoBitbucket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoBitbucket";
});

module IoLogoBitcoin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoBitcoin";
});

module IoLogoBuffer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoBuffer";
});

module IoLogoChrome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoChrome";
});

module IoLogoClosedCaptioning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoClosedCaptioning";
});

module IoLogoCodepen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoCodepen";
});

module IoLogoCss3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoCss3";
});

module IoLogoDesignernews = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoDesignernews";
});

module IoLogoDribbble = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoDribbble";
});

module IoLogoDropbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoDropbox";
});

module IoLogoEuro = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoEuro";
});

module IoLogoFacebook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoFacebook";
});

module IoLogoFlickr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoFlickr";
});

module IoLogoFoursquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoFoursquare";
});

module IoLogoFreebsdDevil = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoFreebsdDevil";
});

module IoLogoGameControllerA = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoGameControllerA";
});

module IoLogoGameControllerB = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoGameControllerB";
});

module IoLogoGithub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoGithub";
});

module IoLogoGoogle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoGoogle";
});

module IoLogoGoogleplus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoGoogleplus";
});

module IoLogoHackernews = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoHackernews";
});

module IoLogoHtml5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoHtml5";
});

module IoLogoInstagram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoInstagram";
});

module IoLogoIonic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoIonic";
});

module IoLogoIonitron = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoIonitron";
});

module IoLogoJavascript = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoJavascript";
});

module IoLogoLinkedin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoLinkedin";
});

module IoLogoMarkdown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoMarkdown";
});

module IoLogoModelS = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoModelS";
});

module IoLogoNoSmoking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoNoSmoking";
});

module IoLogoNodejs = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoNodejs";
});

module IoLogoNpm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoNpm";
});

module IoLogoOctocat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoOctocat";
});

module IoLogoPinterest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoPinterest";
});

module IoLogoPlaystation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoPlaystation";
});

module IoLogoPolymer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoPolymer";
});

module IoLogoPython = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoPython";
});

module IoLogoReddit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoReddit";
});

module IoLogoRss = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoRss";
});

module IoLogoSass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoSass";
});

module IoLogoSkype = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoSkype";
});

module IoLogoSlack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoSlack";
});

module IoLogoSnapchat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoSnapchat";
});

module IoLogoSteam = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoSteam";
});

module IoLogoTumblr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoTumblr";
});

module IoLogoTux = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoTux";
});

module IoLogoTwitch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoTwitch";
});

module IoLogoTwitter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoTwitter";
});

module IoLogoUsd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoUsd";
});

module IoLogoVimeo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoVimeo";
});

module IoLogoVk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoVk";
});

module IoLogoWhatsapp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoWhatsapp";
});

module IoLogoWindows = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoWindows";
});

module IoLogoWordpress = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoWordpress";
});

module IoLogoXbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoXbox";
});

module IoLogoXing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoXing";
});

module IoLogoYahoo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoYahoo";
});

module IoLogoYen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoYen";
});

module IoLogoYoutube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoLogoYoutube";
});

module IoMdAddCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAddCircleOutline";
});

module IoMdAddCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAddCircle";
});

module IoMdAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAdd";
});

module IoMdAirplane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAirplane";
});

module IoMdAlarm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAlarm";
});

module IoMdAlbums = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAlbums";
});

module IoMdAlert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAlert";
});

module IoMdAmericanFootball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAmericanFootball";
});

module IoMdAnalytics = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAnalytics";
});

module IoMdAperture = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAperture";
});

module IoMdApps = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdApps";
});

module IoMdAppstore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAppstore";
});

module IoMdArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArchive";
});

module IoMdArrowBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowBack";
});

module IoMdArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDown";
});

module IoMdArrowDropdownCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropdownCircle";
});

module IoMdArrowDropdown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropdown";
});

module IoMdArrowDropleftCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropleftCircle";
});

module IoMdArrowDropleft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropleft";
});

module IoMdArrowDroprightCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDroprightCircle";
});

module IoMdArrowDropright = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropright";
});

module IoMdArrowDropupCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropupCircle";
});

module IoMdArrowDropup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowDropup";
});

module IoMdArrowForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowForward";
});

module IoMdArrowRoundBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowRoundBack";
});

module IoMdArrowRoundDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowRoundDown";
});

module IoMdArrowRoundForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowRoundForward";
});

module IoMdArrowRoundUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowRoundUp";
});

module IoMdArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdArrowUp";
});

module IoMdAt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAt";
});

module IoMdAttach = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdAttach";
});

module IoMdBackspace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBackspace";
});

module IoMdBarcode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBarcode";
});

module IoMdBaseball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBaseball";
});

module IoMdBasket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBasket";
});

module IoMdBasketball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBasketball";
});

module IoMdBatteryCharging = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBatteryCharging";
});

module IoMdBatteryDead = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBatteryDead";
});

module IoMdBatteryFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBatteryFull";
});

module IoMdBeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBeaker";
});

module IoMdBed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBed";
});

module IoMdBeer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBeer";
});

module IoMdBicycle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBicycle";
});

module IoMdBluetooth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBluetooth";
});

module IoMdBoat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBoat";
});

module IoMdBody = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBody";
});

module IoMdBonfire = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBonfire";
});

module IoMdBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBook";
});

module IoMdBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBookmark";
});

module IoMdBookmarks = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBookmarks";
});

module IoMdBowtie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBowtie";
});

module IoMdBriefcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBriefcase";
});

module IoMdBrowsers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBrowsers";
});

module IoMdBrush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBrush";
});

module IoMdBug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBug";
});

module IoMdBuild = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBuild";
});

module IoMdBulb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBulb";
});

module IoMdBus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBus";
});

module IoMdBusiness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdBusiness";
});

module IoMdCafe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCafe";
});

module IoMdCalculator = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCalculator";
});

module IoMdCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCalendar";
});

module IoMdCall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCall";
});

module IoMdCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCamera";
});

module IoMdCar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCar";
});

module IoMdCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCard";
});

module IoMdCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCart";
});

module IoMdCash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCash";
});

module IoMdCellular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCellular";
});

module IoMdChatboxes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdChatboxes";
});

module IoMdChatbubbles = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdChatbubbles";
});

module IoMdCheckboxOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCheckboxOutline";
});

module IoMdCheckbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCheckbox";
});

module IoMdCheckmarkCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCheckmarkCircleOutline";
});

module IoMdCheckmarkCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCheckmarkCircle";
});

module IoMdCheckmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCheckmark";
});

module IoMdClipboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdClipboard";
});

module IoMdClock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdClock";
});

module IoMdCloseCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloseCircleOutline";
});

module IoMdCloseCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloseCircle";
});

module IoMdClose = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdClose";
});

module IoMdCloudCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudCircle";
});

module IoMdCloudDone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudDone";
});

module IoMdCloudDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudDownload";
});

module IoMdCloudOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudOutline";
});

module IoMdCloudUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudUpload";
});

module IoMdCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloud";
});

module IoMdCloudyNight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudyNight";
});

module IoMdCloudy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCloudy";
});

module IoMdCodeDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCodeDownload";
});

module IoMdCodeWorking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCodeWorking";
});

module IoMdCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCode";
});

module IoMdCog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCog";
});

module IoMdColorFill = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdColorFill";
});

module IoMdColorFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdColorFilter";
});

module IoMdColorPalette = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdColorPalette";
});

module IoMdColorWand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdColorWand";
});

module IoMdCompass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCompass";
});

module IoMdConstruct = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdConstruct";
});

module IoMdContact = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdContact";
});

module IoMdContacts = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdContacts";
});

module IoMdContract = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdContract";
});

module IoMdContrast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdContrast";
});

module IoMdCopy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCopy";
});

module IoMdCreate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCreate";
});

module IoMdCrop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCrop";
});

module IoMdCube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCube";
});

module IoMdCut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdCut";
});

module IoMdDesktop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdDesktop";
});

module IoMdDisc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdDisc";
});

module IoMdDocument = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdDocument";
});

module IoMdDoneAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdDoneAll";
});

module IoMdDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdDownload";
});

module IoMdEasel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdEasel";
});

module IoMdEgg = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdEgg";
});

module IoMdExit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdExit";
});

module IoMdExpand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdExpand";
});

module IoMdEyeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdEyeOff";
});

module IoMdEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdEye";
});

module IoMdFastforward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFastforward";
});

module IoMdFemale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFemale";
});

module IoMdFiling = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFiling";
});

module IoMdFilm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFilm";
});

module IoMdFingerPrint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFingerPrint";
});

module IoMdFitness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFitness";
});

module IoMdFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlag";
});

module IoMdFlame = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlame";
});

module IoMdFlashOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlashOff";
});

module IoMdFlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlash";
});

module IoMdFlashlight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlashlight";
});

module IoMdFlask = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlask";
});

module IoMdFlower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFlower";
});

module IoMdFolderOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFolderOpen";
});

module IoMdFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFolder";
});

module IoMdFootball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFootball";
});

module IoMdFunnel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdFunnel";
});

module IoMdGift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGift";
});

module IoMdGitBranch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGitBranch";
});

module IoMdGitCommit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGitCommit";
});

module IoMdGitCompare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGitCompare";
});

module IoMdGitMerge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGitMerge";
});

module IoMdGitNetwork = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGitNetwork";
});

module IoMdGitPullRequest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGitPullRequest";
});

module IoMdGlasses = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGlasses";
});

module IoMdGlobe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGlobe";
});

module IoMdGrid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdGrid";
});

module IoMdHammer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHammer";
});

module IoMdHand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHand";
});

module IoMdHappy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHappy";
});

module IoMdHeadset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHeadset";
});

module IoMdHeartDislike = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHeartDislike";
});

module IoMdHeartEmpty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHeartEmpty";
});

module IoMdHeartHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHeartHalf";
});

module IoMdHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHeart";
});

module IoMdHelpBuoy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHelpBuoy";
});

module IoMdHelpCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHelpCircleOutline";
});

module IoMdHelpCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHelpCircle";
});

module IoMdHelp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHelp";
});

module IoMdHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHome";
});

module IoMdHourglass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdHourglass";
});

module IoMdIceCream = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdIceCream";
});

module IoMdImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdImage";
});

module IoMdImages = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdImages";
});

module IoMdInfinite = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdInfinite";
});

module IoMdInformationCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdInformationCircleOutline";
});

module IoMdInformationCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdInformationCircle";
});

module IoMdInformation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdInformation";
});

module IoMdJet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdJet";
});

module IoMdJournal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdJournal";
});

module IoMdKey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdKey";
});

module IoMdKeypad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdKeypad";
});

module IoMdLaptop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLaptop";
});

module IoMdLeaf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLeaf";
});

module IoMdLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLink";
});

module IoMdListBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdListBox";
});

module IoMdList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdList";
});

module IoMdLocate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLocate";
});

module IoMdLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLock";
});

module IoMdLogIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLogIn";
});

module IoMdLogOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdLogOut";
});

module IoMdMagnet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMagnet";
});

module IoMdMailOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMailOpen";
});

module IoMdMailUnread = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMailUnread";
});

module IoMdMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMail";
});

module IoMdMale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMale";
});

module IoMdMan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMan";
});

module IoMdMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMap";
});

module IoMdMedal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMedal";
});

module IoMdMedical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMedical";
});

module IoMdMedkit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMedkit";
});

module IoMdMegaphone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMegaphone";
});

module IoMdMenu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMenu";
});

module IoMdMicOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMicOff";
});

module IoMdMic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMic";
});

module IoMdMicrophone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMicrophone";
});

module IoMdMoon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMoon";
});

module IoMdMore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMore";
});

module IoMdMove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMove";
});

module IoMdMusicalNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMusicalNote";
});

module IoMdMusicalNotes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdMusicalNotes";
});

module IoMdNavigate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdNavigate";
});

module IoMdNotificationsOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdNotificationsOff";
});

module IoMdNotificationsOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdNotificationsOutline";
});

module IoMdNotifications = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdNotifications";
});

module IoMdNuclear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdNuclear";
});

module IoMdNutrition = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdNutrition";
});

module IoMdOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdOpen";
});

module IoMdOptions = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdOptions";
});

module IoMdOutlet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdOutlet";
});

module IoMdPaperPlane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPaperPlane";
});

module IoMdPaper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPaper";
});

module IoMdPartlySunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPartlySunny";
});

module IoMdPause = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPause";
});

module IoMdPaw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPaw";
});

module IoMdPeople = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPeople";
});

module IoMdPersonAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPersonAdd";
});

module IoMdPerson = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPerson";
});

module IoMdPhoneLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPhoneLandscape";
});

module IoMdPhonePortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPhonePortrait";
});

module IoMdPhotos = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPhotos";
});

module IoMdPie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPie";
});

module IoMdPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPin";
});

module IoMdPint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPint";
});

module IoMdPizza = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPizza";
});

module IoMdPlanet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPlanet";
});

module IoMdPlayCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPlayCircle";
});

module IoMdPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPlay";
});

module IoMdPodium = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPodium";
});

module IoMdPower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPower";
});

module IoMdPricetag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPricetag";
});

module IoMdPricetags = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPricetags";
});

module IoMdPrint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPrint";
});

module IoMdPulse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdPulse";
});

module IoMdQrScanner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdQrScanner";
});

module IoMdQuote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdQuote";
});

module IoMdRadioButtonOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRadioButtonOff";
});

module IoMdRadioButtonOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRadioButtonOn";
});

module IoMdRadio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRadio";
});

module IoMdRainy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRainy";
});

module IoMdRecording = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRecording";
});

module IoMdRedo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRedo";
});

module IoMdRefreshCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRefreshCircle";
});

module IoMdRefresh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRefresh";
});

module IoMdRemoveCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRemoveCircleOutline";
});

module IoMdRemoveCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRemoveCircle";
});

module IoMdRemove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRemove";
});

module IoMdReorder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdReorder";
});

module IoMdRepeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRepeat";
});

module IoMdResize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdResize";
});

module IoMdRestaurant = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRestaurant";
});

module IoMdReturnLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdReturnLeft";
});

module IoMdReturnRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdReturnRight";
});

module IoMdReverseCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdReverseCamera";
});

module IoMdRewind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRewind";
});

module IoMdRibbon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRibbon";
});

module IoMdRocket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRocket";
});

module IoMdRose = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdRose";
});

module IoMdSad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSad";
});

module IoMdSave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSave";
});

module IoMdSchool = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSchool";
});

module IoMdSearch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSearch";
});

module IoMdSend = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSend";
});

module IoMdSettings = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSettings";
});

module IoMdShareAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdShareAlt";
});

module IoMdShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdShare";
});

module IoMdShirt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdShirt";
});

module IoMdShuffle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdShuffle";
});

module IoMdSkipBackward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSkipBackward";
});

module IoMdSkipForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSkipForward";
});

module IoMdSnow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSnow";
});

module IoMdSpeedometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSpeedometer";
});

module IoMdSquareOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSquareOutline";
});

module IoMdSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSquare";
});

module IoMdStarHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdStarHalf";
});

module IoMdStarOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdStarOutline";
});

module IoMdStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdStar";
});

module IoMdStats = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdStats";
});

module IoMdStopwatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdStopwatch";
});

module IoMdSubway = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSubway";
});

module IoMdSunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSunny";
});

module IoMdSwap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSwap";
});

module IoMdSwitch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSwitch";
});

module IoMdSync = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdSync";
});

module IoMdTabletLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTabletLandscape";
});

module IoMdTabletPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTabletPortrait";
});

module IoMdTennisball = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTennisball";
});

module IoMdText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdText";
});

module IoMdThermometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdThermometer";
});

module IoMdThumbsDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdThumbsDown";
});

module IoMdThumbsUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdThumbsUp";
});

module IoMdThunderstorm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdThunderstorm";
});

module IoMdTime = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTime";
});

module IoMdTimer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTimer";
});

module IoMdToday = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdToday";
});

module IoMdTrain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTrain";
});

module IoMdTransgender = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTransgender";
});

module IoMdTrash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTrash";
});

module IoMdTrendingDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTrendingDown";
});

module IoMdTrendingUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTrendingUp";
});

module IoMdTrophy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTrophy";
});

module IoMdTv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdTv";
});

module IoMdUmbrella = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdUmbrella";
});

module IoMdUndo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdUndo";
});

module IoMdUnlock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdUnlock";
});

module IoMdVideocam = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdVideocam";
});

module IoMdVolumeHigh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdVolumeHigh";
});

module IoMdVolumeLow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdVolumeLow";
});

module IoMdVolumeMute = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdVolumeMute";
});

module IoMdVolumeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdVolumeOff";
});

module IoMdWalk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWalk";
});

module IoMdWallet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWallet";
});

module IoMdWarning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWarning";
});

module IoMdWatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWatch";
});

module IoMdWater = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWater";
});

module IoMdWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWifi";
});

module IoMdWine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWine";
});

module IoMdWoman = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/io"] 
  external reactClass : ReasonReact.reactClass = "IoMdWoman";
});

module Md3dRotation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "Md3dRotation";
});

module MdAccessibility = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccessibility";
});

module MdAccessible = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccessible";
});

module MdAccountBalance = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccountBalance";
});

module MdAccountBalanceWallet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccountBalanceWallet";
});

module MdAccountBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccountBox";
});

module MdAccountCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccountCircle";
});

module MdAddShoppingCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddShoppingCart";
});

module MdAlarm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAlarm";
});

module MdAlarmAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAlarmAdd";
});

module MdAlarmOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAlarmOff";
});

module MdAlarmOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAlarmOn";
});

module MdAllOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAllOut";
});

module MdAndroid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAndroid";
});

module MdAnnouncement = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAnnouncement";
});

module MdAspectRatio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAspectRatio";
});

module MdAssessment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssessment";
});

module MdAssignment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssignment";
});

module MdAssignmentInd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssignmentInd";
});

module MdAssignmentLate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssignmentLate";
});

module MdAssignmentReturn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssignmentReturn";
});

module MdAssignmentReturned = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssignmentReturned";
});

module MdAssignmentTurnedIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssignmentTurnedIn";
});

module MdAutorenew = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAutorenew";
});

module MdBackup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBackup";
});

module MdBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBook";
});

module MdBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBookmark";
});

module MdBookmarkBorder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBookmarkBorder";
});

module MdBugReport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBugReport";
});

module MdBuild = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBuild";
});

module MdCached = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCached";
});

module MdCameraEnhance = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCameraEnhance";
});

module MdCardGiftcard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCardGiftcard";
});

module MdCardMembership = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCardMembership";
});

module MdCardTravel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCardTravel";
});

module MdChangeHistory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChangeHistory";
});

module MdCheckCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCheckCircle";
});

module MdChromeReaderMode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChromeReaderMode";
});

module MdClass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdClass";
});

module MdCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCode";
});

module MdCompareArrows = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCompareArrows";
});

module MdCopyright = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCopyright";
});

module MdCreditCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCreditCard";
});

module MdDashboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDashboard";
});

module MdDateRange = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDateRange";
});

module MdDelete = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDelete";
});

module MdDeleteForever = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDeleteForever";
});

module MdDescription = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDescription";
});

module MdDns = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDns";
});

module MdDone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDone";
});

module MdDoneAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDoneAll";
});

module MdDonutLarge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDonutLarge";
});

module MdDonutSmall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDonutSmall";
});

module MdEject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEject";
});

module MdEuroSymbol = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEuroSymbol";
});

module MdEvent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEvent";
});

module MdEventSeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEventSeat";
});

module MdExitToApp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExitToApp";
});

module MdExplore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExplore";
});

module MdExtension = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExtension";
});

module MdFace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFace";
});

module MdFavorite = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFavorite";
});

module MdFavoriteBorder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFavoriteBorder";
});

module MdFeedback = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFeedback";
});

module MdFindInPage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFindInPage";
});

module MdFindReplace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFindReplace";
});

module MdFingerprint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFingerprint";
});

module MdFlightLand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlightLand";
});

module MdFlightTakeoff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlightTakeoff";
});

module MdFlipToBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlipToBack";
});

module MdFlipToFront = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlipToFront";
});

module MdGTranslate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGTranslate";
});

module MdGavel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGavel";
});

module MdGetApp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGetApp";
});

module MdGif = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGif";
});

module MdGrade = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGrade";
});

module MdGroupWork = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGroupWork";
});

module MdHelp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHelp";
});

module MdHelpOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHelpOutline";
});

module MdHighlightOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHighlightOff";
});

module MdHistory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHistory";
});

module MdHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHome";
});

module MdHourglassEmpty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHourglassEmpty";
});

module MdHourglassFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHourglassFull";
});

module MdHttp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHttp";
});

module MdHttps = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHttps";
});

module MdImportantDevices = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdImportantDevices";
});

module MdInfo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInfo";
});

module MdInfoOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInfoOutline";
});

module MdInput = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInput";
});

module MdInvertColors = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInvertColors";
});

module MdLabel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLabel";
});

module MdLabelOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLabelOutline";
});

module MdLanguage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLanguage";
});

module MdLaunch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLaunch";
});

module MdLightbulbOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLightbulbOutline";
});

module MdLineStyle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLineStyle";
});

module MdLineWeight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLineWeight";
});

module MdList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdList";
});

module MdLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLock";
});

module MdLockOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLockOpen";
});

module MdLockOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLockOutline";
});

module MdLoyalty = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLoyalty";
});

module MdMarkunreadMailbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMarkunreadMailbox";
});

module MdMotorcycle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMotorcycle";
});

module MdNoteAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNoteAdd";
});

module MdOfflinePin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdOfflinePin";
});

module MdOpacity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdOpacity";
});

module MdOpenInBrowser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdOpenInBrowser";
});

module MdOpenInNew = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdOpenInNew";
});

module MdOpenWith = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdOpenWith";
});

module MdPageview = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPageview";
});

module MdPanTool = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPanTool";
});

module MdPayment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPayment";
});

module MdPermCameraMic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermCameraMic";
});

module MdPermContactCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermContactCalendar";
});

module MdPermDataSetting = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermDataSetting";
});

module MdPermDeviceInformation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermDeviceInformation";
});

module MdPermIdentity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermIdentity";
});

module MdPermMedia = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermMedia";
});

module MdPermPhoneMsg = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermPhoneMsg";
});

module MdPermScanWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPermScanWifi";
});

module MdPets = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPets";
});

module MdPictureInPicture = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPictureInPicture";
});

module MdPictureInPictureAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPictureInPictureAlt";
});

module MdPlayForWork = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlayForWork";
});

module MdPolymer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPolymer";
});

module MdPowerSettingsNew = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPowerSettingsNew";
});

module MdPregnantWoman = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPregnantWoman";
});

module MdPrint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPrint";
});

module MdQueryBuilder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdQueryBuilder";
});

module MdQuestionAnswer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdQuestionAnswer";
});

module MdReceipt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReceipt";
});

module MdRecordVoiceOver = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRecordVoiceOver";
});

module MdRedeem = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRedeem";
});

module MdRemoveShoppingCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRemoveShoppingCart";
});

module MdReorder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReorder";
});

module MdReportProblem = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReportProblem";
});

module MdRestore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRestore";
});

module MdRestorePage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRestorePage";
});

module MdRoom = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRoom";
});

module MdRoundedCorner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRoundedCorner";
});

module MdRowing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRowing";
});

module MdSchedule = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSchedule";
});

module MdSearch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSearch";
});

module MdSettings = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettings";
});

module MdSettingsApplications = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsApplications";
});

module MdSettingsBackupRestore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsBackupRestore";
});

module MdSettingsBluetooth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsBluetooth";
});

module MdSettingsBrightness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsBrightness";
});

module MdSettingsCell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsCell";
});

module MdSettingsEthernet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsEthernet";
});

module MdSettingsInputAntenna = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsInputAntenna";
});

module MdSettingsInputComponent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsInputComponent";
});

module MdSettingsInputComposite = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsInputComposite";
});

module MdSettingsInputHdmi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsInputHdmi";
});

module MdSettingsInputSvideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsInputSvideo";
});

module MdSettingsOverscan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsOverscan";
});

module MdSettingsPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsPhone";
});

module MdSettingsPower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsPower";
});

module MdSettingsRemote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsRemote";
});

module MdSettingsVoice = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsVoice";
});

module MdShop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShop";
});

module MdShopTwo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShopTwo";
});

module MdShoppingBasket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShoppingBasket";
});

module MdShoppingCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShoppingCart";
});

module MdSpeakerNotes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpeakerNotes";
});

module MdSpeakerNotesOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpeakerNotesOff";
});

module MdSpellcheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpellcheck";
});

module MdStars = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStars";
});

module MdStore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStore";
});

module MdSubject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSubject";
});

module MdSupervisorAccount = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSupervisorAccount";
});

module MdSwapHoriz = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSwapHoriz";
});

module MdSwapVert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSwapVert";
});

module MdSwapVerticalCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSwapVerticalCircle";
});

module MdSystemUpdateAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSystemUpdateAlt";
});

module MdTab = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTab";
});

module MdTabUnselected = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTabUnselected";
});

module MdTheaters = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTheaters";
});

module MdThumbDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdThumbDown";
});

module MdThumbUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdThumbUp";
});

module MdThumbsUpDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdThumbsUpDown";
});

module MdTimeline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimeline";
});

module MdToc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdToc";
});

module MdToday = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdToday";
});

module MdToll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdToll";
});

module MdTouchApp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTouchApp";
});

module MdTrackChanges = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTrackChanges";
});

module MdTranslate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTranslate";
});

module MdTrendingDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTrendingDown";
});

module MdTrendingFlat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTrendingFlat";
});

module MdTrendingUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTrendingUp";
});

module MdTurnedIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTurnedIn";
});

module MdTurnedInNot = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTurnedInNot";
});

module MdUpdate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdUpdate";
});

module MdVerifiedUser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVerifiedUser";
});

module MdViewAgenda = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewAgenda";
});

module MdViewArray = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewArray";
});

module MdViewCarousel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewCarousel";
});

module MdViewColumn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewColumn";
});

module MdViewDay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewDay";
});

module MdViewHeadline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewHeadline";
});

module MdViewList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewList";
});

module MdViewModule = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewModule";
});

module MdViewQuilt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewQuilt";
});

module MdViewStream = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewStream";
});

module MdViewWeek = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewWeek";
});

module MdVisibility = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVisibility";
});

module MdVisibilityOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVisibilityOff";
});

module MdWatchLater = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWatchLater";
});

module MdWork = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWork";
});

module MdYoutubeSearchedFor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdYoutubeSearchedFor";
});

module MdZoomIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdZoomIn";
});

module MdZoomOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdZoomOut";
});

module MdAddAlert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddAlert";
});

module MdError = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdError";
});

module MdErrorOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdErrorOutline";
});

module MdWarning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWarning";
});

module MdAddToQueue = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddToQueue";
});

module MdAirplay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirplay";
});

module MdAlbum = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAlbum";
});

module MdArtTrack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArtTrack";
});

module MdAvTimer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAvTimer";
});

module MdBrandingWatermark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrandingWatermark";
});

module MdCallToAction = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallToAction";
});

module MdClosedCaption = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdClosedCaption";
});

module MdEqualizer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEqualizer";
});

module MdExplicit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExplicit";
});

module MdFastForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFastForward";
});

module MdFastRewind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFastRewind";
});

module MdFeaturedPlayList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFeaturedPlayList";
});

module MdFeaturedVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFeaturedVideo";
});

module MdFiberDvr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFiberDvr";
});

module MdFiberManualRecord = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFiberManualRecord";
});

module MdFiberNew = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFiberNew";
});

module MdFiberPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFiberPin";
});

module MdFiberSmartRecord = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFiberSmartRecord";
});

module MdForward10 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdForward10";
});

module MdForward30 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdForward30";
});

module MdForward5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdForward5";
});

module MdGames = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGames";
});

module MdHd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHd";
});

module MdHearing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHearing";
});

module MdHighQuality = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHighQuality";
});

module MdLibraryAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLibraryAdd";
});

module MdLibraryBooks = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLibraryBooks";
});

module MdLibraryMusic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLibraryMusic";
});

module MdLoop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLoop";
});

module MdMic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMic";
});

module MdMicNone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMicNone";
});

module MdMicOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMicOff";
});

module MdMovie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMovie";
});

module MdMusicVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMusicVideo";
});

module MdNewReleases = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNewReleases";
});

module MdNotInterested = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNotInterested";
});

module MdNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNote";
});

module MdPause = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPause";
});

module MdPauseCircleFilled = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPauseCircleFilled";
});

module MdPauseCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPauseCircleOutline";
});

module MdPlayArrow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlayArrow";
});

module MdPlayCircleFilled = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlayCircleFilled";
});

module MdPlayCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlayCircleOutline";
});

module MdPlaylistAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlaylistAdd";
});

module MdPlaylistAddCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlaylistAddCheck";
});

module MdPlaylistPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlaylistPlay";
});

module MdQueue = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdQueue";
});

module MdQueueMusic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdQueueMusic";
});

module MdQueuePlayNext = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdQueuePlayNext";
});

module MdRadio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRadio";
});

module MdRecentActors = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRecentActors";
});

module MdRemoveFromQueue = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRemoveFromQueue";
});

module MdRepeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRepeat";
});

module MdRepeatOne = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRepeatOne";
});

module MdReplay10 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReplay10";
});

module MdReplay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReplay";
});

module MdReplay30 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReplay30";
});

module MdReplay5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReplay5";
});

module MdShuffle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShuffle";
});

module MdSkipNext = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSkipNext";
});

module MdSkipPrevious = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSkipPrevious";
});

module MdSlowMotionVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSlowMotionVideo";
});

module MdSnooze = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSnooze";
});

module MdSortByAlpha = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSortByAlpha";
});

module MdStop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStop";
});

module MdSubscriptions = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSubscriptions";
});

module MdSubtitles = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSubtitles";
});

module MdSurroundSound = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSurroundSound";
});

module MdVideoCall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVideoCall";
});

module MdVideoLabel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVideoLabel";
});

module MdVideoLibrary = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVideoLibrary";
});

module MdVideocam = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVideocam";
});

module MdVideocamOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVideocamOff";
});

module MdVolumeDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVolumeDown";
});

module MdVolumeMute = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVolumeMute";
});

module MdVolumeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVolumeOff";
});

module MdVolumeUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVolumeUp";
});

module MdWeb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWeb";
});

module MdWebAsset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWebAsset";
});

module MdBusiness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBusiness";
});

module MdCall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCall";
});

module MdCallEnd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallEnd";
});

module MdCallMade = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallMade";
});

module MdCallMerge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallMerge";
});

module MdCallMissed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallMissed";
});

module MdCallMissedOutgoing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallMissedOutgoing";
});

module MdCallReceived = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallReceived";
});

module MdCallSplit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCallSplit";
});

module MdChat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChat";
});

module MdChatBubble = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChatBubble";
});

module MdChatBubbleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChatBubbleOutline";
});

module MdClearAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdClearAll";
});

module MdComment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdComment";
});

module MdContactMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdContactMail";
});

module MdContactPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdContactPhone";
});

module MdContacts = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdContacts";
});

module MdDialerSip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDialerSip";
});

module MdDialpad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDialpad";
});

module MdEmail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEmail";
});

module MdForum = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdForum";
});

module MdImportContacts = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdImportContacts";
});

module MdImportExport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdImportExport";
});

module MdInvertColorsOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInvertColorsOff";
});

module MdLiveHelp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLiveHelp";
});

module MdLocationOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocationOff";
});

module MdLocationOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocationOn";
});

module MdMailOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMailOutline";
});

module MdMessage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMessage";
});

module MdNoSim = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNoSim";
});

module MdPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhone";
});

module MdPhonelinkErase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonelinkErase";
});

module MdPhonelinkLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonelinkLock";
});

module MdPhonelinkRing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonelinkRing";
});

module MdPhonelinkSetup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonelinkSetup";
});

module MdPortableWifiOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPortableWifiOff";
});

module MdPresentToAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPresentToAll";
});

module MdRingVolume = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRingVolume";
});

module MdRssFeed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRssFeed";
});

module MdScreenShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdScreenShare";
});

module MdSpeakerPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpeakerPhone";
});

module MdStayCurrentLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStayCurrentLandscape";
});

module MdStayCurrentPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStayCurrentPortrait";
});

module MdStayPrimaryLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStayPrimaryLandscape";
});

module MdStayPrimaryPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStayPrimaryPortrait";
});

module MdStopScreenShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStopScreenShare";
});

module MdSwapCalls = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSwapCalls";
});

module MdTextsms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTextsms";
});

module MdVoicemail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVoicemail";
});

module MdVpnKey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVpnKey";
});

module MdAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAdd";
});

module MdAddBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddBox";
});

module MdAddCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddCircle";
});

module MdAddCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddCircleOutline";
});

module MdArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArchive";
});

module MdBackspace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBackspace";
});

module MdBlock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBlock";
});

module MdClear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdClear";
});

module MdContentCopy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdContentCopy";
});

module MdContentCut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdContentCut";
});

module MdContentPaste = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdContentPaste";
});

module MdCreate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCreate";
});

module MdDeleteSweep = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDeleteSweep";
});

module MdDrafts = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDrafts";
});

module MdFilterList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterList";
});

module MdFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlag";
});

module MdFontDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFontDownload";
});

module MdForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdForward";
});

module MdGesture = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGesture";
});

module MdInbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInbox";
});

module MdLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLink";
});

module MdLowPriority = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLowPriority";
});

module MdMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMail";
});

module MdMarkunread = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMarkunread";
});

module MdMoveToInbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMoveToInbox";
});

module MdNextWeek = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNextWeek";
});

module MdRedo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRedo";
});

module MdRemove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRemove";
});

module MdRemoveCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRemoveCircle";
});

module MdRemoveCircleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRemoveCircleOutline";
});

module MdReply = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReply";
});

module MdReplyAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReplyAll";
});

module MdReport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdReport";
});

module MdSave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSave";
});

module MdSelectAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSelectAll";
});

module MdSend = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSend";
});

module MdSort = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSort";
});

module MdTextFormat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTextFormat";
});

module MdUnarchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdUnarchive";
});

module MdUndo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdUndo";
});

module MdWeekend = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWeekend";
});

module MdAccessAlarm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccessAlarm";
});

module MdAccessAlarms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccessAlarms";
});

module MdAccessTime = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAccessTime";
});

module MdAddAlarm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddAlarm";
});

module MdAirplanemodeActive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirplanemodeActive";
});

module MdAirplanemodeInactive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirplanemodeInactive";
});

module MdBattery20 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBattery20";
});

module MdBattery30 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBattery30";
});

module MdBattery50 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBattery50";
});

module MdBattery60 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBattery60";
});

module MdBattery80 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBattery80";
});

module MdBattery90 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBattery90";
});

module MdBatteryAlert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryAlert";
});

module MdBatteryCharging20 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryCharging20";
});

module MdBatteryCharging30 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryCharging30";
});

module MdBatteryCharging50 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryCharging50";
});

module MdBatteryCharging60 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryCharging60";
});

module MdBatteryCharging80 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryCharging80";
});

module MdBatteryCharging90 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryCharging90";
});

module MdBatteryChargingFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryChargingFull";
});

module MdBatteryFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryFull";
});

module MdBatteryStd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryStd";
});

module MdBatteryUnknown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBatteryUnknown";
});

module MdBluetooth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBluetooth";
});

module MdBluetoothConnected = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBluetoothConnected";
});

module MdBluetoothDisabled = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBluetoothDisabled";
});

module MdBluetoothSearching = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBluetoothSearching";
});

module MdBrightnessAuto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightnessAuto";
});

module MdBrightnessHigh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightnessHigh";
});

module MdBrightnessLow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightnessLow";
});

module MdBrightnessMedium = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightnessMedium";
});

module MdDataUsage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDataUsage";
});

module MdDeveloperMode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDeveloperMode";
});

module MdDevices = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDevices";
});

module MdDvr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDvr";
});

module MdGpsFixed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGpsFixed";
});

module MdGpsNotFixed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGpsNotFixed";
});

module MdGpsOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGpsOff";
});

module MdGraphicEq = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGraphicEq";
});

module MdLocationDisabled = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocationDisabled";
});

module MdLocationSearching = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocationSearching";
});

module MdNetworkCell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNetworkCell";
});

module MdNetworkWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNetworkWifi";
});

module MdNfc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNfc";
});

module MdScreenLockLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdScreenLockLandscape";
});

module MdScreenLockPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdScreenLockPortrait";
});

module MdScreenLockRotation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdScreenLockRotation";
});

module MdScreenRotation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdScreenRotation";
});

module MdSdStorage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSdStorage";
});

module MdSettingsSystemDaydream = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSettingsSystemDaydream";
});

module MdSignalCellular0Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellular0Bar";
});

module MdSignalCellular1Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellular1Bar";
});

module MdSignalCellular2Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellular2Bar";
});

module MdSignalCellular3Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellular3Bar";
});

module MdSignalCellular4Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellular4Bar";
});

module MdSignalCellularConnectedNoInternet0Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularConnectedNoInternet0Bar";
});

module MdSignalCellularConnectedNoInternet1Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularConnectedNoInternet1Bar";
});

module MdSignalCellularConnectedNoInternet2Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularConnectedNoInternet2Bar";
});

module MdSignalCellularConnectedNoInternet3Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularConnectedNoInternet3Bar";
});

module MdSignalCellularConnectedNoInternet4Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularConnectedNoInternet4Bar";
});

module MdSignalCellularNoSim = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularNoSim";
});

module MdSignalCellularNull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularNull";
});

module MdSignalCellularOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalCellularOff";
});

module MdSignalWifi0Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi0Bar";
});

module MdSignalWifi1Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi1Bar";
});

module MdSignalWifi1BarLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi1BarLock";
});

module MdSignalWifi2Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi2Bar";
});

module MdSignalWifi2BarLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi2BarLock";
});

module MdSignalWifi3Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi3Bar";
});

module MdSignalWifi3BarLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi3BarLock";
});

module MdSignalWifi4Bar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi4Bar";
});

module MdSignalWifi4BarLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifi4BarLock";
});

module MdSignalWifiOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSignalWifiOff";
});

module MdStorage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStorage";
});

module MdUsb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdUsb";
});

module MdWallpaper = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWallpaper";
});

module MdWidgets = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWidgets";
});

module MdWifiLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWifiLock";
});

module MdWifiTethering = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWifiTethering";
});

module MdAttachFile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAttachFile";
});

module MdAttachMoney = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAttachMoney";
});

module MdBorderAll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderAll";
});

module MdBorderBottom = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderBottom";
});

module MdBorderClear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderClear";
});

module MdBorderColor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderColor";
});

module MdBorderHorizontal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderHorizontal";
});

module MdBorderInner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderInner";
});

module MdBorderLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderLeft";
});

module MdBorderOuter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderOuter";
});

module MdBorderRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderRight";
});

module MdBorderStyle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderStyle";
});

module MdBorderTop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderTop";
});

module MdBorderVertical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBorderVertical";
});

module MdBubbleChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBubbleChart";
});

module MdDragHandle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDragHandle";
});

module MdFormatAlignCenter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatAlignCenter";
});

module MdFormatAlignJustify = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatAlignJustify";
});

module MdFormatAlignLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatAlignLeft";
});

module MdFormatAlignRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatAlignRight";
});

module MdFormatBold = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatBold";
});

module MdFormatClear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatClear";
});

module MdFormatColorFill = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatColorFill";
});

module MdFormatColorReset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatColorReset";
});

module MdFormatColorText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatColorText";
});

module MdFormatIndentDecrease = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatIndentDecrease";
});

module MdFormatIndentIncrease = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatIndentIncrease";
});

module MdFormatItalic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatItalic";
});

module MdFormatLineSpacing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatLineSpacing";
});

module MdFormatListBulleted = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatListBulleted";
});

module MdFormatListNumbered = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatListNumbered";
});

module MdFormatPaint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatPaint";
});

module MdFormatQuote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatQuote";
});

module MdFormatShapes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatShapes";
});

module MdFormatSize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatSize";
});

module MdFormatStrikethrough = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatStrikethrough";
});

module MdFormatTextdirectionLToR = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatTextdirectionLToR";
});

module MdFormatTextdirectionRToL = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatTextdirectionRToL";
});

module MdFormatUnderlined = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFormatUnderlined";
});

module MdFunctions = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFunctions";
});

module MdHighlight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHighlight";
});

module MdInsertChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertChart";
});

module MdInsertComment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertComment";
});

module MdInsertDriveFile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertDriveFile";
});

module MdInsertEmoticon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertEmoticon";
});

module MdInsertInvitation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertInvitation";
});

module MdInsertLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertLink";
});

module MdInsertPhoto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdInsertPhoto";
});

module MdLinearScale = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLinearScale";
});

module MdMergeType = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMergeType";
});

module MdModeComment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdModeComment";
});

module MdModeEdit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdModeEdit";
});

module MdMonetizationOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMonetizationOn";
});

module MdMoneyOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMoneyOff";
});

module MdMultilineChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMultilineChart";
});

module MdPieChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPieChart";
});

module MdPieChartOutlined = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPieChartOutlined";
});

module MdPublish = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPublish";
});

module MdShortText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShortText";
});

module MdShowChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShowChart";
});

module MdSpaceBar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpaceBar";
});

module MdStrikethroughS = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStrikethroughS";
});

module MdTextFields = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTextFields";
});

module MdTitle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTitle";
});

module MdVerticalAlignBottom = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVerticalAlignBottom";
});

module MdVerticalAlignCenter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVerticalAlignCenter";
});

module MdVerticalAlignTop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVerticalAlignTop";
});

module MdWrapText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWrapText";
});

module MdAttachment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAttachment";
});

module MdCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloud";
});

module MdCloudCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloudCircle";
});

module MdCloudDone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloudDone";
});

module MdCloudDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloudDownload";
});

module MdCloudOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloudOff";
});

module MdCloudQueue = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloudQueue";
});

module MdCloudUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCloudUpload";
});

module MdCreateNewFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCreateNewFolder";
});

module MdFileDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFileDownload";
});

module MdFileUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFileUpload";
});

module MdFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFolder";
});

module MdFolderOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFolderOpen";
});

module MdFolderShared = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFolderShared";
});

module MdCast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCast";
});

module MdCastConnected = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCastConnected";
});

module MdComputer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdComputer";
});

module MdDesktopMac = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDesktopMac";
});

module MdDesktopWindows = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDesktopWindows";
});

module MdDeveloperBoard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDeveloperBoard";
});

module MdDeviceHub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDeviceHub";
});

module MdDevicesOther = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDevicesOther";
});

module MdDock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDock";
});

module MdGamepad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGamepad";
});

module MdHeadset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHeadset";
});

module MdHeadsetMic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHeadsetMic";
});

module MdKeyboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboard";
});

module MdKeyboardArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardArrowDown";
});

module MdKeyboardArrowLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardArrowLeft";
});

module MdKeyboardArrowRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardArrowRight";
});

module MdKeyboardArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardArrowUp";
});

module MdKeyboardBackspace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardBackspace";
});

module MdKeyboardCapslock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardCapslock";
});

module MdKeyboardHide = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardHide";
});

module MdKeyboardReturn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardReturn";
});

module MdKeyboardTab = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardTab";
});

module MdKeyboardVoice = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKeyboardVoice";
});

module MdLaptop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLaptop";
});

module MdLaptopChromebook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLaptopChromebook";
});

module MdLaptopMac = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLaptopMac";
});

module MdLaptopWindows = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLaptopWindows";
});

module MdMemory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMemory";
});

module MdMouse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMouse";
});

module MdPhoneAndroid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneAndroid";
});

module MdPhoneIphone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneIphone";
});

module MdPhonelink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonelink";
});

module MdPhonelinkOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonelinkOff";
});

module MdPowerInput = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPowerInput";
});

module MdRouter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRouter";
});

module MdScanner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdScanner";
});

module MdSecurity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSecurity";
});

module MdSimCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSimCard";
});

module MdSmartphone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSmartphone";
});

module MdSpeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpeaker";
});

module MdSpeakerGroup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpeakerGroup";
});

module MdTablet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTablet";
});

module MdTabletAndroid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTabletAndroid";
});

module MdTabletMac = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTabletMac";
});

module MdToys = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdToys";
});

module MdTv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTv";
});

module MdVideogameAsset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVideogameAsset";
});

module MdWatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWatch";
});

module MdAddAPhoto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddAPhoto";
});

module MdAddToPhotos = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddToPhotos";
});

module MdAdjust = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAdjust";
});

module MdAssistant = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssistant";
});

module MdAssistantPhoto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAssistantPhoto";
});

module MdAudiotrack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAudiotrack";
});

module MdBlurCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBlurCircular";
});

module MdBlurLinear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBlurLinear";
});

module MdBlurOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBlurOff";
});

module MdBlurOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBlurOn";
});

module MdBrightness1 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness1";
});

module MdBrightness2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness2";
});

module MdBrightness3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness3";
});

module MdBrightness4 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness4";
});

module MdBrightness5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness5";
});

module MdBrightness6 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness6";
});

module MdBrightness7 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrightness7";
});

module MdBrokenImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrokenImage";
});

module MdBrush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBrush";
});

module MdBurstMode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBurstMode";
});

module MdCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCamera";
});

module MdCameraAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCameraAlt";
});

module MdCameraFront = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCameraFront";
});

module MdCameraRear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCameraRear";
});

module MdCameraRoll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCameraRoll";
});

module MdCenterFocusStrong = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCenterFocusStrong";
});

module MdCenterFocusWeak = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCenterFocusWeak";
});

module MdCollections = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCollections";
});

module MdCollectionsBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCollectionsBookmark";
});

module MdColorLens = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdColorLens";
});

module MdColorize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdColorize";
});

module MdCompare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCompare";
});

module MdControlPoint = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdControlPoint";
});

module MdControlPointDuplicate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdControlPointDuplicate";
});

module MdCrop169 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCrop169";
});

module MdCrop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCrop";
});

module MdCrop32 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCrop32";
});

module MdCrop54 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCrop54";
});

module MdCrop75 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCrop75";
});

module MdCropDin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropDin";
});

module MdCropFree = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropFree";
});

module MdCropLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropLandscape";
});

module MdCropOriginal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropOriginal";
});

module MdCropPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropPortrait";
});

module MdCropRotate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropRotate";
});

module MdCropSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCropSquare";
});

module MdDehaze = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDehaze";
});

module MdDetails = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDetails";
});

module MdEdit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEdit";
});

module MdExposure = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExposure";
});

module MdExposureNeg1 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExposureNeg1";
});

module MdExposureNeg2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExposureNeg2";
});

module MdExposurePlus1 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExposurePlus1";
});

module MdExposurePlus2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExposurePlus2";
});

module MdExposureZero = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExposureZero";
});

module MdFilter1 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter1";
});

module MdFilter2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter2";
});

module MdFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter";
});

module MdFilter3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter3";
});

module MdFilter4 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter4";
});

module MdFilter5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter5";
});

module MdFilter6 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter6";
});

module MdFilter7 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter7";
});

module MdFilter8 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter8";
});

module MdFilter9 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter9";
});

module MdFilter9Plus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilter9Plus";
});

module MdFilterBAndW = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterBAndW";
});

module MdFilterCenterFocus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterCenterFocus";
});

module MdFilterDrama = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterDrama";
});

module MdFilterFrames = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterFrames";
});

module MdFilterHdr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterHdr";
});

module MdFilterNone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterNone";
});

module MdFilterTiltShift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterTiltShift";
});

module MdFilterVintage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFilterVintage";
});

module MdFlare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlare";
});

module MdFlashAuto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlashAuto";
});

module MdFlashOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlashOff";
});

module MdFlashOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlashOn";
});

module MdFlip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlip";
});

module MdGradient = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGradient";
});

module MdGrain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGrain";
});

module MdGridOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGridOff";
});

module MdGridOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGridOn";
});

module MdHdrOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHdrOff";
});

module MdHdrOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHdrOn";
});

module MdHdrStrong = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHdrStrong";
});

module MdHdrWeak = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHdrWeak";
});

module MdHealing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHealing";
});

module MdImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdImage";
});

module MdImageAspectRatio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdImageAspectRatio";
});

module MdIso = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdIso";
});

module MdLandscape = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLandscape";
});

module MdLeakAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLeakAdd";
});

module MdLeakRemove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLeakRemove";
});

module MdLens = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLens";
});

module MdLinkedCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLinkedCamera";
});

module MdLooks = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooks";
});

module MdLooks3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooks3";
});

module MdLooks4 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooks4";
});

module MdLooks5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooks5";
});

module MdLooks6 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooks6";
});

module MdLooksOne = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooksOne";
});

module MdLooksTwo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLooksTwo";
});

module MdLoupe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLoupe";
});

module MdMonochromePhotos = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMonochromePhotos";
});

module MdMovieCreation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMovieCreation";
});

module MdMovieFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMovieFilter";
});

module MdMusicNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMusicNote";
});

module MdNature = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNature";
});

module MdNaturePeople = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNaturePeople";
});

module MdNavigateBefore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNavigateBefore";
});

module MdNavigateNext = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNavigateNext";
});

module MdPalette = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPalette";
});

module MdPanorama = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPanorama";
});

module MdPanoramaFishEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPanoramaFishEye";
});

module MdPanoramaHorizontal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPanoramaHorizontal";
});

module MdPanoramaVertical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPanoramaVertical";
});

module MdPanoramaWideAngle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPanoramaWideAngle";
});

module MdPhoto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoto";
});

module MdPhotoAlbum = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoAlbum";
});

module MdPhotoCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoCamera";
});

module MdPhotoFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoFilter";
});

module MdPhotoLibrary = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoLibrary";
});

module MdPhotoSizeSelectActual = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoSizeSelectActual";
});

module MdPhotoSizeSelectLarge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoSizeSelectLarge";
});

module MdPhotoSizeSelectSmall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhotoSizeSelectSmall";
});

module MdPictureAsPdf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPictureAsPdf";
});

module MdPortrait = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPortrait";
});

module MdRemoveRedEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRemoveRedEye";
});

module MdRotate90DegreesCcw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRotate90DegreesCcw";
});

module MdRotateLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRotateLeft";
});

module MdRotateRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRotateRight";
});

module MdSlideshow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSlideshow";
});

module MdStraighten = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStraighten";
});

module MdStyle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStyle";
});

module MdSwitchCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSwitchCamera";
});

module MdSwitchVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSwitchVideo";
});

module MdTagFaces = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTagFaces";
});

module MdTexture = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTexture";
});

module MdTimelapse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimelapse";
});

module MdTimer10 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimer10";
});

module MdTimer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimer";
});

module MdTimer3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimer3";
});

module MdTimerOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimerOff";
});

module MdTonality = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTonality";
});

module MdTransform = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTransform";
});

module MdTune = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTune";
});

module MdViewComfy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewComfy";
});

module MdViewCompact = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdViewCompact";
});

module MdVignette = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVignette";
});

module MdWbAuto = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWbAuto";
});

module MdWbCloudy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWbCloudy";
});

module MdWbIncandescent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWbIncandescent";
});

module MdWbIridescent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWbIridescent";
});

module MdWbSunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWbSunny";
});

module MdAddLocation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAddLocation";
});

module MdBeenhere = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBeenhere";
});

module MdDirections = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirections";
});

module MdDirectionsBike = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsBike";
});

module MdDirectionsBoat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsBoat";
});

module MdDirectionsBus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsBus";
});

module MdDirectionsCar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsCar";
});

module MdDirectionsRailway = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsRailway";
});

module MdDirectionsRun = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsRun";
});

module MdDirectionsSubway = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsSubway";
});

module MdDirectionsTransit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsTransit";
});

module MdDirectionsWalk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDirectionsWalk";
});

module MdEditLocation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEditLocation";
});

module MdEvStation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEvStation";
});

module MdFlight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFlight";
});

module MdHotel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHotel";
});

module MdLayers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLayers";
});

module MdLayersClear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLayersClear";
});

module MdLocalActivity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalActivity";
});

module MdLocalAirport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalAirport";
});

module MdLocalAtm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalAtm";
});

module MdLocalBar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalBar";
});

module MdLocalCafe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalCafe";
});

module MdLocalCarWash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalCarWash";
});

module MdLocalConvenienceStore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalConvenienceStore";
});

module MdLocalDining = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalDining";
});

module MdLocalDrink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalDrink";
});

module MdLocalFlorist = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalFlorist";
});

module MdLocalGasStation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalGasStation";
});

module MdLocalGroceryStore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalGroceryStore";
});

module MdLocalHospital = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalHospital";
});

module MdLocalHotel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalHotel";
});

module MdLocalLaundryService = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalLaundryService";
});

module MdLocalLibrary = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalLibrary";
});

module MdLocalMall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalMall";
});

module MdLocalMovies = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalMovies";
});

module MdLocalOffer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalOffer";
});

module MdLocalParking = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalParking";
});

module MdLocalPharmacy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalPharmacy";
});

module MdLocalPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalPhone";
});

module MdLocalPizza = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalPizza";
});

module MdLocalPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalPlay";
});

module MdLocalPostOffice = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalPostOffice";
});

module MdLocalPrintshop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalPrintshop";
});

module MdLocalSee = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalSee";
});

module MdLocalShipping = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalShipping";
});

module MdLocalTaxi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocalTaxi";
});

module MdMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMap";
});

module MdMyLocation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMyLocation";
});

module MdNavigation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNavigation";
});

module MdNearMe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNearMe";
});

module MdPersonPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPersonPin";
});

module MdPersonPinCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPersonPinCircle";
});

module MdPinDrop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPinDrop";
});

module MdPlace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlace";
});

module MdRateReview = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRateReview";
});

module MdRestaurant = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRestaurant";
});

module MdRestaurantMenu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRestaurantMenu";
});

module MdSatellite = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSatellite";
});

module MdStoreMallDirectory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStoreMallDirectory";
});

module MdStreetview = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStreetview";
});

module MdSubway = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSubway";
});

module MdTerrain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTerrain";
});

module MdTraffic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTraffic";
});

module MdTrain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTrain";
});

module MdTram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTram";
});

module MdTransferWithinAStation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTransferWithinAStation";
});

module MdZoomOutMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdZoomOutMap";
});

module MdApps = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdApps";
});

module MdArrowBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowBack";
});

module MdArrowDownward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowDownward";
});

module MdArrowDropDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowDropDown";
});

module MdArrowDropDownCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowDropDownCircle";
});

module MdArrowDropUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowDropUp";
});

module MdArrowForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowForward";
});

module MdArrowUpward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdArrowUpward";
});

module MdCancel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCancel";
});

module MdCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCheck";
});

module MdChevronLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChevronLeft";
});

module MdChevronRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChevronRight";
});

module MdClose = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdClose";
});

module MdExpandLess = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExpandLess";
});

module MdExpandMore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdExpandMore";
});

module MdFirstPage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFirstPage";
});

module MdFullscreen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFullscreen";
});

module MdFullscreenExit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFullscreenExit";
});

module MdLastPage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLastPage";
});

module MdMenu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMenu";
});

module MdMoreHoriz = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMoreHoriz";
});

module MdMoreVert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMoreVert";
});

module MdRefresh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRefresh";
});

module MdSubdirectoryArrowLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSubdirectoryArrowLeft";
});

module MdSubdirectoryArrowRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSubdirectoryArrowRight";
});

module MdUnfoldLess = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdUnfoldLess";
});

module MdUnfoldMore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdUnfoldMore";
});

module MdAdb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAdb";
});

module MdAirlineSeatFlat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatFlat";
});

module MdAirlineSeatFlatAngled = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatFlatAngled";
});

module MdAirlineSeatIndividualSuite = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatIndividualSuite";
});

module MdAirlineSeatLegroomExtra = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatLegroomExtra";
});

module MdAirlineSeatLegroomNormal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatLegroomNormal";
});

module MdAirlineSeatLegroomReduced = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatLegroomReduced";
});

module MdAirlineSeatReclineExtra = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatReclineExtra";
});

module MdAirlineSeatReclineNormal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirlineSeatReclineNormal";
});

module MdBluetoothAudio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBluetoothAudio";
});

module MdConfirmationNumber = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdConfirmationNumber";
});

module MdDiscFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDiscFull";
});

module MdDoNotDisturb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDoNotDisturb";
});

module MdDoNotDisturbAlt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDoNotDisturbAlt";
});

module MdDoNotDisturbOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDoNotDisturbOff";
});

module MdDoNotDisturbOn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDoNotDisturbOn";
});

module MdDriveEta = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDriveEta";
});

module MdEnhancedEncryption = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEnhancedEncryption";
});

module MdEventAvailable = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEventAvailable";
});

module MdEventBusy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEventBusy";
});

module MdEventNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdEventNote";
});

module MdFolderSpecial = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFolderSpecial";
});

module MdLiveTv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLiveTv";
});

module MdMms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMms";
});

module MdMore = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMore";
});

module MdNetworkCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNetworkCheck";
});

module MdNetworkLocked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNetworkLocked";
});

module MdNoEncryption = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNoEncryption";
});

module MdOndemandVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdOndemandVideo";
});

module MdPersonalVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPersonalVideo";
});

module MdPhoneBluetoothSpeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneBluetoothSpeaker";
});

module MdPhoneForwarded = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneForwarded";
});

module MdPhoneInTalk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneInTalk";
});

module MdPhoneLocked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneLocked";
});

module MdPhoneMissed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhoneMissed";
});

module MdPhonePaused = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPhonePaused";
});

module MdPower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPower";
});

module MdPriorityHigh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPriorityHigh";
});

module MdRvHookup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRvHookup";
});

module MdSdCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSdCard";
});

module MdSimCardAlert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSimCardAlert";
});

module MdSms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSms";
});

module MdSmsFailed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSmsFailed";
});

module MdSync = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSync";
});

module MdSyncDisabled = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSyncDisabled";
});

module MdSyncProblem = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSyncProblem";
});

module MdSystemUpdate = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSystemUpdate";
});

module MdTapAndPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTapAndPlay";
});

module MdTimeToLeave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdTimeToLeave";
});

module MdVibration = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVibration";
});

module MdVoiceChat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVoiceChat";
});

module MdVpnLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdVpnLock";
});

module MdWc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWc";
});

module MdWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWifi";
});

module MdAcUnit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAcUnit";
});

module MdAirportShuttle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAirportShuttle";
});

module MdAllInclusive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdAllInclusive";
});

module MdBeachAccess = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBeachAccess";
});

module MdBusinessCenter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdBusinessCenter";
});

module MdCasino = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCasino";
});

module MdChildCare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChildCare";
});

module MdChildFriendly = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdChildFriendly";
});

module MdFitnessCenter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFitnessCenter";
});

module MdFreeBreakfast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdFreeBreakfast";
});

module MdGolfCourse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGolfCourse";
});

module MdHotTub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdHotTub";
});

module MdKitchen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdKitchen";
});

module MdPool = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPool";
});

module MdRoomService = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRoomService";
});

module MdSmokeFree = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSmokeFree";
});

module MdSmokingRooms = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSmokingRooms";
});

module MdSpa = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSpa";
});

module MdCake = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCake";
});

module MdDomain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdDomain";
});

module MdGroup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGroup";
});

module MdGroupAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdGroupAdd";
});

module MdLocationCity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdLocationCity";
});

module MdMood = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMood";
});

module MdMoodBad = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdMoodBad";
});

module MdNotifications = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNotifications";
});

module MdNotificationsActive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNotificationsActive";
});

module MdNotificationsNone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNotificationsNone";
});

module MdNotificationsOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNotificationsOff";
});

module MdNotificationsPaused = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdNotificationsPaused";
});

module MdPages = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPages";
});

module MdPartyMode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPartyMode";
});

module MdPeople = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPeople";
});

module MdPeopleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPeopleOutline";
});

module MdPerson = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPerson";
});

module MdPersonAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPersonAdd";
});

module MdPersonOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPersonOutline";
});

module MdPlusOne = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPlusOne";
});

module MdPoll = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPoll";
});

module MdPublic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdPublic";
});

module MdSchool = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSchool";
});

module MdSentimentDissatisfied = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSentimentDissatisfied";
});

module MdSentimentNeutral = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSentimentNeutral";
});

module MdSentimentSatisfied = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSentimentSatisfied";
});

module MdSentimentVeryDissatisfied = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSentimentVeryDissatisfied";
});

module MdSentimentVerySatisfied = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdSentimentVerySatisfied";
});

module MdShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdShare";
});

module MdWhatshot = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdWhatshot";
});

module MdCheckBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCheckBox";
});

module MdCheckBoxOutlineBlank = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdCheckBoxOutlineBlank";
});

module MdIndeterminateCheckBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdIndeterminateCheckBox";
});

module MdRadioButtonChecked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRadioButtonChecked";
});

module MdRadioButtonUnchecked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdRadioButtonUnchecked";
});

module MdStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStar";
});

module MdStarBorder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStarBorder";
});

module MdStarHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/md"] 
  external reactClass : ReasonReact.reactClass = "MdStarHalf";
});

module TiAdjustBrightness = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAdjustBrightness";
});

module TiAdjustContrast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAdjustContrast";
});

module TiAnchorOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAnchorOutline";
});

module TiAnchor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAnchor";
});

module TiArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArchive";
});

module TiArrowBackOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowBackOutline";
});

module TiArrowBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowBack";
});

module TiArrowDownOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowDownOutline";
});

module TiArrowDownThick = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowDownThick";
});

module TiArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowDown";
});

module TiArrowForwardOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowForwardOutline";
});

module TiArrowForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowForward";
});

module TiArrowLeftOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowLeftOutline";
});

module TiArrowLeftThick = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowLeftThick";
});

module TiArrowLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowLeft";
});

module TiArrowLoopOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowLoopOutline";
});

module TiArrowLoop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowLoop";
});

module TiArrowMaximiseOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowMaximiseOutline";
});

module TiArrowMaximise = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowMaximise";
});

module TiArrowMinimiseOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowMinimiseOutline";
});

module TiArrowMinimise = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowMinimise";
});

module TiArrowMoveOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowMoveOutline";
});

module TiArrowMove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowMove";
});

module TiArrowRepeatOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowRepeatOutline";
});

module TiArrowRepeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowRepeat";
});

module TiArrowRightOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowRightOutline";
});

module TiArrowRightThick = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowRightThick";
});

module TiArrowRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowRight";
});

module TiArrowShuffle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowShuffle";
});

module TiArrowSortedDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowSortedDown";
});

module TiArrowSortedUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowSortedUp";
});

module TiArrowSyncOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowSyncOutline";
});

module TiArrowSync = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowSync";
});

module TiArrowUnsorted = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowUnsorted";
});

module TiArrowUpOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowUpOutline";
});

module TiArrowUpThick = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowUpThick";
});

module TiArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiArrowUp";
});

module TiAt = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAt";
});

module TiAttachmentOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAttachmentOutline";
});

module TiAttachment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiAttachment";
});

module TiBackspaceOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBackspaceOutline";
});

module TiBackspace = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBackspace";
});

module TiBatteryCharge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBatteryCharge";
});

module TiBatteryFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBatteryFull";
});

module TiBatteryHigh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBatteryHigh";
});

module TiBatteryLow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBatteryLow";
});

module TiBatteryMid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBatteryMid";
});

module TiBeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBeaker";
});

module TiBeer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBeer";
});

module TiBell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBell";
});

module TiBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBook";
});

module TiBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBookmark";
});

module TiBriefcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBriefcase";
});

module TiBrush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBrush";
});

module TiBusinessCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiBusinessCard";
});

module TiCalculator = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCalculator";
});

module TiCalendarOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCalendarOutline";
});

module TiCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCalendar";
});

module TiCameraOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCameraOutline";
});

module TiCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCamera";
});

module TiCancelOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCancelOutline";
});

module TiCancel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCancel";
});

module TiChartAreaOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartAreaOutline";
});

module TiChartArea = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartArea";
});

module TiChartBarOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartBarOutline";
});

module TiChartBar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartBar";
});

module TiChartLineOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartLineOutline";
});

module TiChartLine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartLine";
});

module TiChartPieOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartPieOutline";
});

module TiChartPie = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChartPie";
});

module TiChevronLeftOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChevronLeftOutline";
});

module TiChevronLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChevronLeft";
});

module TiChevronRightOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChevronRightOutline";
});

module TiChevronRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiChevronRight";
});

module TiClipboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiClipboard";
});

module TiCloudStorageOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCloudStorageOutline";
});

module TiCloudStorage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCloudStorage";
});

module TiCodeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCodeOutline";
});

module TiCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCode";
});

module TiCoffee = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCoffee";
});

module TiCogOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCogOutline";
});

module TiCog = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCog";
});

module TiCompass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCompass";
});

module TiContacts = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiContacts";
});

module TiCreditCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCreditCard";
});

module TiCss3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiCss3";
});

module TiDatabase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDatabase";
});

module TiDeleteOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDeleteOutline";
});

module TiDelete = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDelete";
});

module TiDeviceDesktop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDeviceDesktop";
});

module TiDeviceLaptop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDeviceLaptop";
});

module TiDevicePhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDevicePhone";
});

module TiDeviceTablet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDeviceTablet";
});

module TiDirections = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDirections";
});

module TiDivideOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDivideOutline";
});

module TiDivide = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDivide";
});

module TiDocumentAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDocumentAdd";
});

module TiDocumentDelete = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDocumentDelete";
});

module TiDocumentText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDocumentText";
});

module TiDocument = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDocument";
});

module TiDownloadOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDownloadOutline";
});

module TiDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDownload";
});

module TiDropbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiDropbox";
});

module TiEdit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEdit";
});

module TiEjectOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEjectOutline";
});

module TiEject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEject";
});

module TiEqualsOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEqualsOutline";
});

module TiEquals = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEquals";
});

module TiExportOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiExportOutline";
});

module TiExport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiExport";
});

module TiEyeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEyeOutline";
});

module TiEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiEye";
});

module TiFeather = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFeather";
});

module TiFilm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFilm";
});

module TiFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFilter";
});

module TiFlagOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlagOutline";
});

module TiFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlag";
});

module TiFlashOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlashOutline";
});

module TiFlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlash";
});

module TiFlowChildren = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlowChildren";
});

module TiFlowMerge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlowMerge";
});

module TiFlowParallel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlowParallel";
});

module TiFlowSwitch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFlowSwitch";
});

module TiFolderAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFolderAdd";
});

module TiFolderDelete = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFolderDelete";
});

module TiFolderOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFolderOpen";
});

module TiFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiFolder";
});

module TiGift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiGift";
});

module TiGlobeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiGlobeOutline";
});

module TiGlobe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiGlobe";
});

module TiGroupOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiGroupOutline";
});

module TiGroup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiGroup";
});

module TiHeadphones = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHeadphones";
});

module TiHeartFullOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHeartFullOutline";
});

module TiHeartHalfOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHeartHalfOutline";
});

module TiHeartOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHeartOutline";
});

module TiHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHeart";
});

module TiHomeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHomeOutline";
});

module TiHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHome";
});

module TiHtml5 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiHtml5";
});

module TiImageOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiImageOutline";
});

module TiImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiImage";
});

module TiInfinityOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInfinityOutline";
});

module TiInfinity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInfinity";
});

module TiInfoLargeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInfoLargeOutline";
});

module TiInfoLarge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInfoLarge";
});

module TiInfoOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInfoOutline";
});

module TiInfo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInfo";
});

module TiInputCheckedOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInputCheckedOutline";
});

module TiInputChecked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiInputChecked";
});

module TiKeyOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiKeyOutline";
});

module TiKey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiKey";
});

module TiKeyboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiKeyboard";
});

module TiLeaf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLeaf";
});

module TiLightbulb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLightbulb";
});

module TiLinkOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLinkOutline";
});

module TiLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLink";
});

module TiLocationArrowOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLocationArrowOutline";
});

module TiLocationArrow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLocationArrow";
});

module TiLocationOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLocationOutline";
});

module TiLocation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLocation";
});

module TiLockClosedOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLockClosedOutline";
});

module TiLockClosed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLockClosed";
});

module TiLockOpenOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLockOpenOutline";
});

module TiLockOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiLockOpen";
});

module TiMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMail";
});

module TiMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMap";
});

module TiMediaEjectOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaEjectOutline";
});

module TiMediaEject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaEject";
});

module TiMediaFastForwardOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaFastForwardOutline";
});

module TiMediaFastForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaFastForward";
});

module TiMediaPauseOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaPauseOutline";
});

module TiMediaPause = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaPause";
});

module TiMediaPlayOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaPlayOutline";
});

module TiMediaPlayReverseOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaPlayReverseOutline";
});

module TiMediaPlayReverse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaPlayReverse";
});

module TiMediaPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaPlay";
});

module TiMediaRecordOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaRecordOutline";
});

module TiMediaRecord = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaRecord";
});

module TiMediaRewindOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaRewindOutline";
});

module TiMediaRewind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaRewind";
});

module TiMediaStopOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaStopOutline";
});

module TiMediaStop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMediaStop";
});

module TiMessageTyping = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMessageTyping";
});

module TiMessage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMessage";
});

module TiMessages = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMessages";
});

module TiMicrophoneOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMicrophoneOutline";
});

module TiMicrophone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMicrophone";
});

module TiMinusOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMinusOutline";
});

module TiMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMinus";
});

module TiMortarBoard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiMortarBoard";
});

module TiNews = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiNews";
});

module TiNotesOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiNotesOutline";
});

module TiNotes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiNotes";
});

module TiPen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPen";
});

module TiPencil = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPencil";
});

module TiPhoneOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPhoneOutline";
});

module TiPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPhone";
});

module TiPiOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPiOutline";
});

module TiPi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPi";
});

module TiPinOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPinOutline";
});

module TiPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPin";
});

module TiPipette = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPipette";
});

module TiPlaneOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPlaneOutline";
});

module TiPlane = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPlane";
});

module TiPlug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPlug";
});

module TiPlusOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPlusOutline";
});

module TiPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPlus";
});

module TiPointOfInterestOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPointOfInterestOutline";
});

module TiPointOfInterest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPointOfInterest";
});

module TiPowerOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPowerOutline";
});

module TiPower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPower";
});

module TiPrinter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPrinter";
});

module TiPuzzleOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPuzzleOutline";
});

module TiPuzzle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiPuzzle";
});

module TiRadarOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiRadarOutline";
});

module TiRadar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiRadar";
});

module TiRefreshOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiRefreshOutline";
});

module TiRefresh = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiRefresh";
});

module TiRssOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiRssOutline";
});

module TiRss = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiRss";
});

module TiScissorsOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiScissorsOutline";
});

module TiScissors = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiScissors";
});

module TiShoppingBag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiShoppingBag";
});

module TiShoppingCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiShoppingCart";
});

module TiSocialAtCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialAtCircular";
});

module TiSocialDribbbleCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialDribbbleCircular";
});

module TiSocialDribbble = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialDribbble";
});

module TiSocialFacebookCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialFacebookCircular";
});

module TiSocialFacebook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialFacebook";
});

module TiSocialFlickrCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialFlickrCircular";
});

module TiSocialFlickr = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialFlickr";
});

module TiSocialGithubCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialGithubCircular";
});

module TiSocialGithub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialGithub";
});

module TiSocialGooglePlusCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialGooglePlusCircular";
});

module TiSocialGooglePlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialGooglePlus";
});

module TiSocialInstagramCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialInstagramCircular";
});

module TiSocialInstagram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialInstagram";
});

module TiSocialLastFmCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialLastFmCircular";
});

module TiSocialLastFm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialLastFm";
});

module TiSocialLinkedinCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialLinkedinCircular";
});

module TiSocialLinkedin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialLinkedin";
});

module TiSocialPinterestCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialPinterestCircular";
});

module TiSocialPinterest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialPinterest";
});

module TiSocialSkypeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialSkypeOutline";
});

module TiSocialSkype = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialSkype";
});

module TiSocialTumblerCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialTumblerCircular";
});

module TiSocialTumbler = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialTumbler";
});

module TiSocialTwitterCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialTwitterCircular";
});

module TiSocialTwitter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialTwitter";
});

module TiSocialVimeoCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialVimeoCircular";
});

module TiSocialVimeo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialVimeo";
});

module TiSocialYoutubeCircular = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialYoutubeCircular";
});

module TiSocialYoutube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSocialYoutube";
});

module TiSortAlphabeticallyOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSortAlphabeticallyOutline";
});

module TiSortAlphabetically = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSortAlphabetically";
});

module TiSortNumericallyOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSortNumericallyOutline";
});

module TiSortNumerically = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSortNumerically";
});

module TiSpannerOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSpannerOutline";
});

module TiSpanner = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSpanner";
});

module TiSpiral = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSpiral";
});

module TiStarFullOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStarFullOutline";
});

module TiStarHalfOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStarHalfOutline";
});

module TiStarHalf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStarHalf";
});

module TiStarOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStarOutline";
});

module TiStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStar";
});

module TiStarburstOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStarburstOutline";
});

module TiStarburst = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStarburst";
});

module TiStopwatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiStopwatch";
});

module TiSupport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiSupport";
});

module TiTabsOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTabsOutline";
});

module TiTag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTag";
});

module TiTags = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTags";
});

module TiThLargeOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThLargeOutline";
});

module TiThLarge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThLarge";
});

module TiThListOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThListOutline";
});

module TiThList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThList";
});

module TiThMenuOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThMenuOutline";
});

module TiThMenu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThMenu";
});

module TiThSmallOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThSmallOutline";
});

module TiThSmall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThSmall";
});

module TiThermometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThermometer";
});

module TiThumbsDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThumbsDown";
});

module TiThumbsOk = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThumbsOk";
});

module TiThumbsUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiThumbsUp";
});

module TiTickOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTickOutline";
});

module TiTick = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTick";
});

module TiTicket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTicket";
});

module TiTime = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTime";
});

module TiTimesOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTimesOutline";
});

module TiTimes = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTimes";
});

module TiTrash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTrash";
});

module TiTree = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiTree";
});

module TiUploadOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUploadOutline";
});

module TiUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUpload";
});

module TiUserAddOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUserAddOutline";
});

module TiUserAdd = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUserAdd";
});

module TiUserDeleteOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUserDeleteOutline";
});

module TiUserDelete = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUserDelete";
});

module TiUserOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUserOutline";
});

module TiUser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiUser";
});

module TiVendorAndroid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVendorAndroid";
});

module TiVendorApple = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVendorApple";
});

module TiVendorMicrosoft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVendorMicrosoft";
});

module TiVideoOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVideoOutline";
});

module TiVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVideo";
});

module TiVolumeDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVolumeDown";
});

module TiVolumeMute = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVolumeMute";
});

module TiVolumeUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVolumeUp";
});

module TiVolume = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiVolume";
});

module TiWarningOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWarningOutline";
});

module TiWarning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWarning";
});

module TiWatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWatch";
});

module TiWavesOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWavesOutline";
});

module TiWaves = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWaves";
});

module TiWeatherCloudy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherCloudy";
});

module TiWeatherDownpour = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherDownpour";
});

module TiWeatherNight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherNight";
});

module TiWeatherPartlySunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherPartlySunny";
});

module TiWeatherShower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherShower";
});

module TiWeatherSnow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherSnow";
});

module TiWeatherStormy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherStormy";
});

module TiWeatherSunny = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherSunny";
});

module TiWeatherWindyCloudy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherWindyCloudy";
});

module TiWeatherWindy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWeatherWindy";
});

module TiWiFiOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWiFiOutline";
});

module TiWiFi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWiFi";
});

module TiWine = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWine";
});

module TiWorldOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWorldOutline";
});

module TiWorld = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiWorld";
});

module TiZoomInOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiZoomInOutline";
});

module TiZoomIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiZoomIn";
});

module TiZoomOutOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiZoomOutOutline";
});

module TiZoomOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiZoomOut";
});

module TiZoomOutline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiZoomOutline";
});

module TiZoom = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/ti"] 
  external reactClass : ReasonReact.reactClass = "TiZoom";
});

module GoAlert = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoAlert";
});

module GoArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArchive";
});

module GoArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowDown";
});

module GoArrowLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowLeft";
});

module GoArrowRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowRight";
});

module GoArrowSmallDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowSmallDown";
});

module GoArrowSmallLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowSmallLeft";
});

module GoArrowSmallRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowSmallRight";
});

module GoArrowSmallUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowSmallUp";
});

module GoArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoArrowUp";
});

module GoBeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBeaker";
});

module GoBell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBell";
});

module GoBold = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBold";
});

module GoBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBook";
});

module GoBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBookmark";
});

module GoBriefcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBriefcase";
});

module GoBroadcast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBroadcast";
});

module GoBrowser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBrowser";
});

module GoBug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoBug";
});

module GoCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCalendar";
});

module GoCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCheck";
});

module GoChecklist = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoChecklist";
});

module GoChevronDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoChevronDown";
});

module GoChevronLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoChevronLeft";
});

module GoChevronRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoChevronRight";
});

module GoChevronUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoChevronUp";
});

module GoCircleSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCircleSlash";
});

module GoCircuitBoard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCircuitBoard";
});

module GoClippy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoClippy";
});

module GoClock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoClock";
});

module GoCloudDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCloudDownload";
});

module GoCloudUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCloudUpload";
});

module GoCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCode";
});

module GoCommentDiscussion = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCommentDiscussion";
});

module GoComment = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoComment";
});

module GoCreditCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoCreditCard";
});

module GoDash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDash";
});

module GoDashboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDashboard";
});

module GoDatabase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDatabase";
});

module GoDesktopDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDesktopDownload";
});

module GoDeviceCameraVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDeviceCameraVideo";
});

module GoDeviceCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDeviceCamera";
});

module GoDeviceDesktop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDeviceDesktop";
});

module GoDeviceMobile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDeviceMobile";
});

module GoDiffAdded = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDiffAdded";
});

module GoDiffIgnored = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDiffIgnored";
});

module GoDiffModified = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDiffModified";
});

module GoDiffRemoved = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDiffRemoved";
});

module GoDiffRenamed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDiffRenamed";
});

module GoDiff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoDiff";
});

module GoEllipsis = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoEllipsis";
});

module GoEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoEye";
});

module GoFileBinary = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileBinary";
});

module GoFileCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileCode";
});

module GoFileDirectory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileDirectory";
});

module GoFileMedia = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileMedia";
});

module GoFilePdf = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFilePdf";
});

module GoFileSubmodule = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileSubmodule";
});

module GoFileSymlinkDirectory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileSymlinkDirectory";
});

module GoFileSymlinkFile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileSymlinkFile";
});

module GoFileZip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFileZip";
});

module GoFile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFile";
});

module GoFlame = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFlame";
});

module GoFold = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoFold";
});

module GoGear = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGear";
});

module GoGift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGift";
});

module GoGistSecret = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGistSecret";
});

module GoGist = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGist";
});

module GoGitBranch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGitBranch";
});

module GoGitCommit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGitCommit";
});

module GoGitCompare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGitCompare";
});

module GoGitMerge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGitMerge";
});

module GoGitPullRequest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGitPullRequest";
});

module GoGlobe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGlobe";
});

module GoGrabber = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGrabber";
});

module GoGraph = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoGraph";
});

module GoHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoHeart";
});

module GoHistory = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoHistory";
});

module GoHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoHome";
});

module GoHorizontalRule = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoHorizontalRule";
});

module GoHubot = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoHubot";
});

module GoInbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoInbox";
});

module GoInfo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoInfo";
});

module GoIssueClosed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoIssueClosed";
});

module GoIssueOpened = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoIssueOpened";
});

module GoIssueReopened = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoIssueReopened";
});

module GoItalic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoItalic";
});

module GoJersey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoJersey";
});

module GoKebabHorizontal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoKebabHorizontal";
});

module GoKebabVertical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoKebabVertical";
});

module GoKey = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoKey";
});

module GoKeyboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoKeyboard";
});

module GoLaw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLaw";
});

module GoLightBulb = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLightBulb";
});

module GoLinkExternal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLinkExternal";
});

module GoLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLink";
});

module GoListOrdered = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoListOrdered";
});

module GoListUnordered = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoListUnordered";
});

module GoLocation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLocation";
});

module GoLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLock";
});

module GoLogoGist = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLogoGist";
});

module GoLogoGithub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoLogoGithub";
});

module GoMailRead = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMailRead";
});

module GoMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMail";
});

module GoMarkGithub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMarkGithub";
});

module GoMarkdown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMarkdown";
});

module GoMegaphone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMegaphone";
});

module GoMention = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMention";
});

module GoMilestone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMilestone";
});

module GoMirror = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMirror";
});

module GoMortarBoard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMortarBoard";
});

module GoMute = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoMute";
});

module GoNoNewline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoNoNewline";
});

module GoNote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoNote";
});

module GoOctoface = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoOctoface";
});

module GoOrganization = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoOrganization";
});

module GoPackage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPackage";
});

module GoPaintcan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPaintcan";
});

module GoPencil = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPencil";
});

module GoPerson = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPerson";
});

module GoPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPin";
});

module GoPlug = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPlug";
});

module GoPlusSmall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPlusSmall";
});

module GoPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPlus";
});

module GoPrimitiveDot = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPrimitiveDot";
});

module GoPrimitiveSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPrimitiveSquare";
});

module GoProject = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoProject";
});

module GoPulse = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoPulse";
});

module GoQuestion = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoQuestion";
});

module GoQuote = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoQuote";
});

module GoRadioTower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRadioTower";
});

module GoReply = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoReply";
});

module GoRepoClone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRepoClone";
});

module GoRepoForcePush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRepoForcePush";
});

module GoRepoForked = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRepoForked";
});

module GoRepoPull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRepoPull";
});

module GoRepoPush = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRepoPush";
});

module GoRepo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRepo";
});

module GoReport = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoReport";
});

module GoRocket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRocket";
});

module GoRss = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRss";
});

module GoRuby = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoRuby";
});

module GoScreenFull = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoScreenFull";
});

module GoScreenNormal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoScreenNormal";
});

module GoSearch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSearch";
});

module GoServer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoServer";
});

module GoSettings = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSettings";
});

module GoShield = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoShield";
});

module GoSignIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSignIn";
});

module GoSignOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSignOut";
});

module GoSmiley = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSmiley";
});

module GoSquirrel = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSquirrel";
});

module GoStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoStar";
});

module GoStop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoStop";
});

module GoSync = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoSync";
});

module GoTag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTag";
});

module GoTasklist = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTasklist";
});

module GoTelescope = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTelescope";
});

module GoTerminal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTerminal";
});

module GoTextSize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTextSize";
});

module GoThreeBars = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoThreeBars";
});

module GoThumbsdown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoThumbsdown";
});

module GoThumbsup = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoThumbsup";
});

module GoTools = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTools";
});

module GoTrashcan = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTrashcan";
});

module GoTriangleDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTriangleDown";
});

module GoTriangleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTriangleLeft";
});

module GoTriangleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTriangleRight";
});

module GoTriangleUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoTriangleUp";
});

module GoUnfold = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoUnfold";
});

module GoUnmute = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoUnmute";
});

module GoUnverified = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoUnverified";
});

module GoVerified = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoVerified";
});

module GoVersions = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoVersions";
});

module GoWatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoWatch";
});

module GoX = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoX";
});

module GoZap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/go"] 
  external reactClass : ReasonReact.reactClass = "GoZap";
});

module FiActivity = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiActivity";
});

module FiAirplay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAirplay";
});

module FiAlertCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlertCircle";
});

module FiAlertOctagon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlertOctagon";
});

module FiAlertTriangle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlertTriangle";
});

module FiAlignCenter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlignCenter";
});

module FiAlignJustify = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlignJustify";
});

module FiAlignLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlignLeft";
});

module FiAlignRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAlignRight";
});

module FiAnchor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAnchor";
});

module FiAperture = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAperture";
});

module FiArchive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArchive";
});

module FiArrowDownCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowDownCircle";
});

module FiArrowDownLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowDownLeft";
});

module FiArrowDownRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowDownRight";
});

module FiArrowDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowDown";
});

module FiArrowLeftCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowLeftCircle";
});

module FiArrowLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowLeft";
});

module FiArrowRightCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowRightCircle";
});

module FiArrowRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowRight";
});

module FiArrowUpCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowUpCircle";
});

module FiArrowUpLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowUpLeft";
});

module FiArrowUpRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowUpRight";
});

module FiArrowUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiArrowUp";
});

module FiAtSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAtSign";
});

module FiAward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiAward";
});

module FiBarChart2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBarChart2";
});

module FiBarChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBarChart";
});

module FiBatteryCharging = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBatteryCharging";
});

module FiBattery = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBattery";
});

module FiBellOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBellOff";
});

module FiBell = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBell";
});

module FiBluetooth = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBluetooth";
});

module FiBold = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBold";
});

module FiBookOpen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBookOpen";
});

module FiBook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBook";
});

module FiBookmark = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBookmark";
});

module FiBox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBox";
});

module FiBriefcase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiBriefcase";
});

module FiCalendar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCalendar";
});

module FiCameraOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCameraOff";
});

module FiCamera = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCamera";
});

module FiCast = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCast";
});

module FiCheckCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCheckCircle";
});

module FiCheckSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCheckSquare";
});

module FiCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCheck";
});

module FiChevronDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronDown";
});

module FiChevronLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronLeft";
});

module FiChevronRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronRight";
});

module FiChevronUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronUp";
});

module FiChevronsDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronsDown";
});

module FiChevronsLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronsLeft";
});

module FiChevronsRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronsRight";
});

module FiChevronsUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChevronsUp";
});

module FiChrome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiChrome";
});

module FiCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCircle";
});

module FiClipboard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiClipboard";
});

module FiClock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiClock";
});

module FiCloudDrizzle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCloudDrizzle";
});

module FiCloudLightning = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCloudLightning";
});

module FiCloudOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCloudOff";
});

module FiCloudRain = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCloudRain";
});

module FiCloudSnow = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCloudSnow";
});

module FiCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCloud";
});

module FiCode = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCode";
});

module FiCodepen = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCodepen";
});

module FiCommand = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCommand";
});

module FiCompass = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCompass";
});

module FiCopy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCopy";
});

module FiCornerDownLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerDownLeft";
});

module FiCornerDownRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerDownRight";
});

module FiCornerLeftDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerLeftDown";
});

module FiCornerLeftUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerLeftUp";
});

module FiCornerRightDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerRightDown";
});

module FiCornerRightUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerRightUp";
});

module FiCornerUpLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerUpLeft";
});

module FiCornerUpRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCornerUpRight";
});

module FiCpu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCpu";
});

module FiCreditCard = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCreditCard";
});

module FiCrop = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCrop";
});

module FiCrosshair = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiCrosshair";
});

module FiDatabase = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDatabase";
});

module FiDelete = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDelete";
});

module FiDisc = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDisc";
});

module FiDollarSign = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDollarSign";
});

module FiDownloadCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDownloadCloud";
});

module FiDownload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDownload";
});

module FiDroplet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiDroplet";
});

module FiEdit2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiEdit2";
});

module FiEdit3 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiEdit3";
});

module FiEdit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiEdit";
});

module FiExternalLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiExternalLink";
});

module FiEyeOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiEyeOff";
});

module FiEye = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiEye";
});

module FiFacebook = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFacebook";
});

module FiFastForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFastForward";
});

module FiFeather = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFeather";
});

module FiFileMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFileMinus";
});

module FiFilePlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFilePlus";
});

module FiFileText = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFileText";
});

module FiFile = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFile";
});

module FiFilm = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFilm";
});

module FiFilter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFilter";
});

module FiFlag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFlag";
});

module FiFolderMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFolderMinus";
});

module FiFolderPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFolderPlus";
});

module FiFolder = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiFolder";
});

module FiGift = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGift";
});

module FiGitBranch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGitBranch";
});

module FiGitCommit = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGitCommit";
});

module FiGitMerge = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGitMerge";
});

module FiGitPullRequest = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGitPullRequest";
});

module FiGithub = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGithub";
});

module FiGitlab = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGitlab";
});

module FiGlobe = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGlobe";
});

module FiGrid = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiGrid";
});

module FiHardDrive = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiHardDrive";
});

module FiHash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiHash";
});

module FiHeadphones = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiHeadphones";
});

module FiHeart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiHeart";
});

module FiHelpCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiHelpCircle";
});

module FiHome = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiHome";
});

module FiImage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiImage";
});

module FiInbox = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiInbox";
});

module FiInfo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiInfo";
});

module FiInstagram = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiInstagram";
});

module FiItalic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiItalic";
});

module FiLayers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLayers";
});

module FiLayout = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLayout";
});

module FiLifeBuoy = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLifeBuoy";
});

module FiLink2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLink2";
});

module FiLink = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLink";
});

module FiLinkedin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLinkedin";
});

module FiList = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiList";
});

module FiLoader = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLoader";
});

module FiLock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLock";
});

module FiLogIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLogIn";
});

module FiLogOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiLogOut";
});

module FiMail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMail";
});

module FiMapPin = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMapPin";
});

module FiMap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMap";
});

module FiMaximize2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMaximize2";
});

module FiMaximize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMaximize";
});

module FiMenu = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMenu";
});

module FiMessageCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMessageCircle";
});

module FiMessageSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMessageSquare";
});

module FiMicOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMicOff";
});

module FiMic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMic";
});

module FiMinimize2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMinimize2";
});

module FiMinimize = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMinimize";
});

module FiMinusCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMinusCircle";
});

module FiMinusSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMinusSquare";
});

module FiMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMinus";
});

module FiMonitor = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMonitor";
});

module FiMoon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMoon";
});

module FiMoreHorizontal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMoreHorizontal";
});

module FiMoreVertical = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMoreVertical";
});

module FiMove = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMove";
});

module FiMusic = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiMusic";
});

module FiNavigation2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiNavigation2";
});

module FiNavigation = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiNavigation";
});

module FiOctagon = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiOctagon";
});

module FiPackage = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPackage";
});

module FiPaperclip = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPaperclip";
});

module FiPauseCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPauseCircle";
});

module FiPause = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPause";
});

module FiPercent = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPercent";
});

module FiPhoneCall = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhoneCall";
});

module FiPhoneForwarded = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhoneForwarded";
});

module FiPhoneIncoming = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhoneIncoming";
});

module FiPhoneMissed = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhoneMissed";
});

module FiPhoneOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhoneOff";
});

module FiPhoneOutgoing = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhoneOutgoing";
});

module FiPhone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPhone";
});

module FiPieChart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPieChart";
});

module FiPlayCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPlayCircle";
});

module FiPlay = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPlay";
});

module FiPlusCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPlusCircle";
});

module FiPlusSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPlusSquare";
});

module FiPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPlus";
});

module FiPocket = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPocket";
});

module FiPower = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPower";
});

module FiPrinter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiPrinter";
});

module FiRadio = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRadio";
});

module FiRefreshCcw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRefreshCcw";
});

module FiRefreshCw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRefreshCw";
});

module FiRepeat = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRepeat";
});

module FiRewind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRewind";
});

module FiRotateCcw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRotateCcw";
});

module FiRotateCw = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRotateCw";
});

module FiRss = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiRss";
});

module FiSave = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSave";
});

module FiScissors = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiScissors";
});

module FiSearch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSearch";
});

module FiSend = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSend";
});

module FiServer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiServer";
});

module FiSettings = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSettings";
});

module FiShare2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShare2";
});

module FiShare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShare";
});

module FiShieldOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShieldOff";
});

module FiShield = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShield";
});

module FiShoppingBag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShoppingBag";
});

module FiShoppingCart = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShoppingCart";
});

module FiShuffle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiShuffle";
});

module FiSidebar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSidebar";
});

module FiSkipBack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSkipBack";
});

module FiSkipForward = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSkipForward";
});

module FiSlack = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSlack";
});

module FiSlash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSlash";
});

module FiSliders = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSliders";
});

module FiSmartphone = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSmartphone";
});

module FiSpeaker = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSpeaker";
});

module FiSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSquare";
});

module FiStar = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiStar";
});

module FiStopCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiStopCircle";
});

module FiSun = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSun";
});

module FiSunrise = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSunrise";
});

module FiSunset = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiSunset";
});

module FiTablet = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTablet";
});

module FiTag = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTag";
});

module FiTarget = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTarget";
});

module FiTerminal = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTerminal";
});

module FiThermometer = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiThermometer";
});

module FiThumbsDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiThumbsDown";
});

module FiThumbsUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiThumbsUp";
});

module FiToggleLeft = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiToggleLeft";
});

module FiToggleRight = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiToggleRight";
});

module FiTrash2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTrash2";
});

module FiTrash = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTrash";
});

module FiTrendingDown = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTrendingDown";
});

module FiTrendingUp = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTrendingUp";
});

module FiTriangle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTriangle";
});

module FiTruck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTruck";
});

module FiTv = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTv";
});

module FiTwitter = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiTwitter";
});

module FiType = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiType";
});

module FiUmbrella = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUmbrella";
});

module FiUnderline = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUnderline";
});

module FiUnlock = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUnlock";
});

module FiUploadCloud = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUploadCloud";
});

module FiUpload = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUpload";
});

module FiUserCheck = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUserCheck";
});

module FiUserMinus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUserMinus";
});

module FiUserPlus = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUserPlus";
});

module FiUserX = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUserX";
});

module FiUser = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUser";
});

module FiUsers = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiUsers";
});

module FiVideoOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVideoOff";
});

module FiVideo = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVideo";
});

module FiVoicemail = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVoicemail";
});

module FiVolume1 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVolume1";
});

module FiVolume2 = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVolume2";
});

module FiVolumeX = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVolumeX";
});

module FiVolume = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiVolume";
});

module FiWatch = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiWatch";
});

module FiWifiOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiWifiOff";
});

module FiWifi = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiWifi";
});

module FiWind = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiWind";
});

module FiXCircle = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiXCircle";
});

module FiXSquare = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiXSquare";
});

module FiX = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiX";
});

module FiYoutube = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiYoutube";
});

module FiZapOff = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiZapOff";
});

module FiZap = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiZap";
});

module FiZoomIn = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiZoomIn";
});

module FiZoomOut = [%%bs.raw{|/*#__PURE__*/|}] ReactIcons_Functor.MakeIcon({
  [@bs.module "react-icons/fi"] 
  external reactClass : ReasonReact.reactClass = "FiZoomOut";
});