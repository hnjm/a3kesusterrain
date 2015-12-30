class CfgPatches
{
        class kuwait_map_data
        {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
                requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Structures_F"};
        };
};


// class CfgSurfaces
// {
//         class Default{};
//         class Water{};

//         class gm_grassSurface : Default
//         {      
//                  access = 2;
//                  files = "gm_grass_green_*";
//                  rough = 0.3;
//                  dust = 0.5;
//                  maxSpeedCoef = 0.4;
//                  lucidity = 1.25;
//                  soundEnviron = "grass";
//                  character = "gm_grassClutter";
//                  soundHit = "soft_ground";
//         };
 
//         class gm_sandSurface : Default
//         {
//             access = 2;
//             files = "gm_sand_*";
//             rough = 0.8;
//             dust = 500;
//             maxSpeedCoef = 0.7;
//             lucidity = 0;
//             soundEnviron = "sand";
//             character = "gm_sandClutter";
//             soundHit = "soft_ground";
//         };
       
//         class gm_underwatersandSurface : Default
//         {
//             access = 2;
//             files = "gm_underwatersand_*";
//             rough = 0.15;
//             dust = 0.75;
//             maxSpeedCoef = 0.85;
//             lucidity = 50;
//             soundEnviron = "sand";
//             character = "gm_underwatersandClutter";
//             soundHit = "soft_ground";
//       };
 
       
// };
// class CfgSurfaceCharacters
// {
//         class gm_grassClutter
//         {
//                 probability[]={0.79,0.1,0.1};
//                 names[]={"gm_Grass_Green","gm_GrassTall","gm_GrassLong_DryBunch"};
//         };
//         class gm_sandClutter
//         {
//                 probability[]={0.07};
//                 names[]={"gm_Grass_Dry"};
//         };
//         class gm_underwatersandClutter
//         {
//               probability[]={0.79,0.1};
//               names[]={"gm_SeaWeed1","gm_SeaWeed2"};
//         };
// };
class CfgMaterials
{
        class Water
        {
                PixelShaderID = "Water";
                VertexShaderID = "Water";
                ambient[] = {0.0,0.025,0.05,0.5};
                diffuse[] = {0.0,0.05,0.04,1.0};
                forcedDiffuse[] = {0.0,0.0,0.0,1};
                specular[] = {0.12,0.12,0.12,1};
                specularPower = 100;
                emmisive[] = {0,0,0,0};
                class Stage1
                {
                        texture = "A3\Map_data\water_nofhq.paa";
                        uvSource = "texWaterAnim";
                        class uvTransform
                        {
                                aside[] = {0,1,0};
                                up[] = {1,0,0};
                                dir[] = {0,0,1};
                                pos[] = {0.3,0.4,0};
                        };
                };
                class Stage2
                {
                        texture = "A3\data_f\sea_foam_lco.paa";
                        uvSource = "none";
                };
                class Stage3
                {
                        texture = "A3\Map_data\water2_nohq.paa";
                        uvSource = "none";
                };
        };
        class Shore
        {
                PixelShaderID = "Shore";
                VertexShaderID = "Shore";
                ambient[] = {0.0,0.025,0.05,0.5};
                diffuse[] = {0.0,0.05,0.04,1.0};
                forcedDiffuse[] = {0.0,0.0,0.0,1};
                specular[] = {0.12,0.12,0.12,1};
                specularPower = 100;
                emmisive[] = {0,0,0,0};
                class Stage1
                {
                        texture = "A3\Map_data\water_nofhq.paa";
                        uvSource = "texWaterAnim";
                        class uvTransform
                        {
                                aside[] = {0,1,0};
                                up[] = {0.1,0,0};
                                dir[] = {0,0,1};
                                pos[] = {0.3,0.4,0};
                        };
                };
                class Stage2
                {
                        texture = "A3\data_f\sea_foam_lco.paa";
                        uvSource = "none";
                };
                class Stage3
                {
                        texture = "A3\Map_data\water2_nohq.paa";
                        uvSource = "none";
                };
        };
        class ShoreWet
        {
                PixelShaderID = "ShoreWet";
                VertexShaderID = "Shore";
        };
};
class CfgWorlds
{
        initWorld = "kuwait";
        demoWorld = "kuwait";
        class DefaultWorld
        {
                class Weather
                {
                        class Overcast
                        {
                                class Weather1;
                                class Weather2;
                                class Weather3;
                                class Weather4;
                                class Weather5;
                        };
                        class WindConfig;
                };
        };
        class CAWorld: DefaultWorld
        {
				class Grid;
                class DefaultClutter;
                // class clutter
                // {
                //         class gm_GrassTall: DefaultClutter
                //         {
                //                 model = "A3\plants_f\Clutter\c_Grass_Tall_Dead.p3d";
                //                 affectedByWind = 1.0;
                //                 swLighting = "true";
                //                 scaleMin = 0.6;
                //                 scaleMax = 1.0;
                //         };
                //         class gm_Grass_Green: DefaultClutter
                //         {
                //                 model = "A3\plants_f\Clutter\c_Grass_Green.p3d";
                //                 affectedByWind = 1.0;
                //                 swLighting = "true";
                //                 scaleMin = 0.85;
                //                 scaleMax = 1.0;
                //                 surfaceColor[] = {0.431,0.475,0.267};
                //         };
                //         class gm_GrassLong_DryBunch: DefaultClutter
                //         {
                //                 model = "A3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                //                 affectedByWind = 0.8;
                //                 swLighting = "true";
                //                 scaleMin = 0.9;
                //                 scaleMax = 1.2;
                //         };
                //         class gm_Grass_dry: DefaultClutter
                //         {
                //                 model = "A3\plants_f\Clutter\c_Grass_Dry.p3d";
                //                 affectedByWind = 0.8;
                //                 swLighting = "true";
                //                 scaleMin = 0.9;
                //                 scaleMax = 1.2;
                //         };
 
                // };
                class Weather: Weather
                {
                        class Overcast: Overcast
                        {
                                class Weather1: Weather1
                                {
                                        sky = "A3\data_f\sky_clear_sky.paa";
                                        skyR = "A3\data_f\sky_clear_lco.paa";
                                        horizon = "A3\data_f\sky_clear_horizont_sky.paa";
                                        overcast = 0;
                                        alpha = 0;
                                        size = 0.1;
                                        height = 1;
                                        bright = 0.7;
                                        speed = 0;
                                        through = 1;
                                        diffuse = 1;
                                        cloudDiffuse = 0.95;
                                        waves = 0.2;
                                        lightingOvercast = 0;
                                };
                                class Weather7: Weather1
                                {
                                        sky = "A3\data_f\sky_veryclear_sky.paa";
                                        skyR = "A3\data_f\sky_clear_lco.paa";
                                        horizon = "A3\data_f\sky_veryclear_horizont_sky.paa";
                                        overcast = 0.07;
                                        alpha = 0.5;
                                        size = 0.2;
                                        height = 0.95;
                                        bright = 0.5;
                                        speed = 0.1;
                                        through = 1;
                                        diffuse = 1;
                                        cloudDiffuse = 0.95;
                                        waves = 0.2;
                                        lightingOvercast = 0;
                                };
                                class Weather2: Weather2
                                {
                                        sky = "A3\data_f\sky_almostclear_sky.paa";
                                        skyR = "A3\data_f\sky_almostclear_lco.paa";
                                        horizon = "A3\data_f\sky_almostclear_horizont_sky.paa";
                                        overcast = 0.25;
                                        alpha = 0.6;
                                        size = 0.3;
                                        height = 0.9;
                                        bright = 0.45;
                                        speed = 0.25;
                                        through = 1;
                                        lightingOvercast = 0.1;
                                        diffuse = 1;
                                        waves = 0.22;
                                };
                                class Weather3: Weather3
                                {
                                        sky = "A3\data_f\sky_semicloudy_sky.paa";
                                        skyR = "A3\data_f\sky_semicloudy_lco.paa";
                                        horizon = "A3\data_f\sky_semicloudy_horizont_sky.paa";
                                        overcast = 0.4;
                                        alpha = 0.8;
                                        size = 0.5;
                                        height = 0.8;
                                        bright = 0.4;
                                        speed = 0.45;
                                        through = 0.7;
                                        lightingOvercast = 0.5;
                                        diffuse = 0.8;
                                        waves = 0.32;
                                };
                                class Weather4: Weather4
                                {
                                        sky = "A3\data_f\sky_cloudy_sky.paa";
                                        skyR = "A3\data_f\sky_cloudy_lco.paa";
                                        horizon = "A3\data_f\sky_cloudy_horizont_sky.paa";
                                        overcast = 0.6;
                                        alpha = 0.99;
                                        size = 0.65;
                                        height = 0.75;
                                        bright = 0.5;
                                        speed = 0.55;
                                        through = 0.4;
                                        lightingOvercast = 0.85;
                                        diffuse = 0.6;
                                        waves = 0.32;
                                };
                                class Weather5: Weather5
                                {
                                        sky = "A3\data_f\sky_mostlycloudy_sky.paa";
                                        skyR = "A3\data_f\sky_mostlycloudy_lco.paa";
                                        horizon = "A3\data_f\sky_mostlycloudy_horizont_sky.paa";
                                        overcast = 0.9;
                                        alpha = 0.55;
                                        size = 0.8;
                                        height = 0.7;
                                        bright = 0.33;
                                        speed = 0.75;
                                        through = 0;
                                        lightingOvercast = 0.98;
                                        diffuse = 0.3;
                                        waves = 0.52;
                                };
                                class Weather6: Weather5
                                {
                                        sky = "A3\data_f\sky_overcast_sky.paa";
                                        skyR = "A3\data_f\sky_overcast_lco.paa";
                                        horizon = "A3\data_f\sky_overcast_horizont_sky.paa";
                                        overcast = 1;
                                        alpha = 0.4;
                                        bright = 0.2;
                                        size = 1;
                                        height = 0.6;
                                        speed = 0.95;
                                        through = 0;
                                        lightingOvercast = 0.98;
                                        diffuse = 0.1;
                                        waves = 0.7;
                                };
                        };
                        class ThunderboltNorm
                        {
                                model = "\A3\data_f\blesk1.p3d";
                                soundNear[] = {"\A3\sounds_f\dummysound",31.622776,1};
                                soundFar[] = {"\A3\sounds_f\dummysound",10,1};
                        };
                        class ThunderboltHeavy
                        {
                                model = "\A3\data_f\blesk2.p3d";
                                soundNear[] = {"\A3\sounds_f\dummysound",31.622776,1};
                                soundFar[] = {"\A3\sounds_f\dummysound",10,1};
                        };
                        class LightningsConfig
                        {
                                minCloudiness = 0.85;
                                minProbability = 0.0;
                                maxProbability = 0.25;
                                minCount = 0;
                                maxCount = 6;
                                scatter = 120;
                        };
                        class WindConfig: WindConfig
                        {
                                maxForce = 7.0;
                        };
                };
                class Rain
                {
                        texture = "A3\data_f\rain_ca.paa";
                        raindrop = "\A3\data_f\raindrop.p3d";
                        speed = 1;
                        levels[] = {8,2};
                };
                class RainParticles
			{
			rainDropTexture = "a3\data_f\rainnormal_ca.paa";
			texDropCount = 4;
			minRainDensity = 0.01;
			effectRadius = 15;
			windCoef = 0.05;
			dropSpeed = 25.0;
			rndSpeed = 0.2;
			rndDir = 0.02;
			dropWidth = 0.02;
			dropHeight = 0.8;
			dropColor[] = {0.1,0.1,0.1,0.15};
			lumSunFront = 0.1;
			lumSunBack = 0.1;
			refractCoef = 0.5;
			refractSaturation = 0.3;
		};
		skyTexture = "A3\data_f\sky_semicloudy_sky.paa";
		skyTextureR = "A3\data_f\sky_semicloudy_lco.paa";
		seaTexture = "a3\data_f\seatexture_co.paa";
		clouds[] = {"A3\data_f\mrak1.p3d","A3\data_f\mrak2.p3d","A3\data_f\mrak3.p3d","A3\data_f\mrak4.p3d"};
		skyObject = "A3\data_f\obloha.p3d";
		starsObject = "A3\data_f\stars.p3d";
		pointObject = "A3\data_f\point.p3d";
		horizontObject = "A3\data_f\horizont.p3d";
		haloObject = "A3\data_f\sunhalo.p3d";
		sunObject = "A3\data_f\sun.p3d";
		rainbowObject = "A3\data_f\rainbow.p3d";
		moonObject = "A3\data_f\moon.p3d";
	};
        
		class DefaultLighting;
	class kuwait: CAWorld //cambiar por el nombre de tu mapa
	{
		
		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;

		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.001;
			minWaterOpacity = 80;
			waterOpacityDistCoef = 0.9;
			underwaterOpacity = 1;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		
		
		startWeather = 0.1; //0.3 orig - establece el tiempo al abrir el mapa en el editor
		startFog = 0.0; //define el valor niebla al abrir el mapa en el editor | mismo que slider niebla en editor (probablemente)
		forecastWeather = 0.2; // 0.3 Tablas de previsión al abrir el mapa en el editor /forescat
		forecastFog = 0.0;//~
		startFogBase = 0.0;//~
		forecastFogBase = 0.0;//~
		startFogDecay = 0.013;//~
		forecastFogDecay = 0.013;//~
		fogBeta0Min = 0.0;//~
		fogBeta0Max = 0.05;//~
		
	   };
		hazeDistCoef = 0.1; //??
		hazeFogCoef = 0.98; //??
		hazeBaseHeight = 150; //??
		hazeBaseBeta0 = 6e-005; //??
		hazeDensityDecay = 0.0006; //??
		horizonParallaxCoef = 0.045; //??
		horizonFogColorationStart = "0.8f"; //??
		skyFogColorationStart = "0.7f"; //??
		soundMapSizeCoef = 4; //??
		satelliteNormalBlendStart = 10; //?when satellite and HD texture blend?
		satelliteNormalBlendEnd = 100; //?when satellite and HD texture blend?
		skyObject = "A3\Map_Stratis\data\obloha.p3d"; //skybox object, don't touch
		horizontObject = "A3\Map_Stratis\data\horizont.p3d"; //??
		access = 3; //unknown, leave 3 set
		worldId = 4; //unknown, change to any number you like
		cutscenes[] = {""}; //nombre del archivo de la intro si la creamos, esta si no hay quitar valor entre comillas mejor
		description = "kuwait"; // nombre del Mapa mostrado en Selección de Mapa, si no hay quitar valor entre comillas
		//icon = "esus\kuwait\data\gfx\icon.paa"; // ruta a la imagen icono del clan, icono mapa, etc, si no hay quitar valor entre comillas
		worldName = "\esus\kuwait\kuwait.wrp"; //ruta a tu archivo .wrp
		//pictureMap = "esus\kuwait\data\gfx\picturemap.paa"; //ruta al archivo imagen mapa mostrado en el arranque mapa, si no hay quitar valor entre comillas
		//pictureShot = "esus\kuwait\data\gfx\sing_ui_kabrera_ca.paa";
		plateFormat = "AS$-####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		author =  "ESUS"; // Creador del Mapa
		mapSize = 5120; //medida mapa x10 , esto no estoy seguro, no recuerdo porque llegué a esta conclusion, debo mirar el mapa de está gente
		mapZone = 31; //zona UTM si fuera + seria hemisferio norte
		//longitude = 2.933; //situación de longitud del mapa si es real + es este
		//latitude = 39.15; // situación en latitud del mapa si es real , + es sur
		elevationOffset = 0; //debo averiguar que hace
		envTexture = "A3\Data_f\env_land_ca.tga"; //no cambiar
		//newRoadsShape = "\esus\kuwait\data\roads\roads.shp"; // ruta al archivo roads.shp si se crean carreteras
		startTime = "06:45"; //hora que se mostrara en el mapa ? no tocar de momento no influye k yo sepa
		startDate = "5/5/2014";  //fecha que se mostrara en mapa ? no tocar de momento
		centerPosition[] = {1040,1000,500}; //where the editor focuses on when you start the map (probably)
		seagullPos[] = {1040,850,500}; //if player respawns as seagull??
		clutterGrid = 1.5; //not sure, I think lower number needs better pc, just don't touch
		clutterDist = 125;  //Max Distancia a ver grass/hirba (en metros)
		noDetailDist = 40; //65 not quite sure
		fullDetailDist = 15; //15 probably how far you see HD ground textures
		midDetailTexture = "A3\Map_Data\middle_mco.paa"; // no tocar A3\Map_Data\middle_mco.paa
		minTreesInForestSquare = 4;
		minRocksInRockSquare = 2; //4
		loadingTexts[] = {"Deserp project, by ESUS"}; // descripción a modo de intro explicativa en texto del Mapa
		ilsPosition[] = {0, 0}; //Airport position
		ilsDirection[] = {0, 0, 0}; //Airport "rotation"
		ilsTaxiIn[] = {}; //Taxiway Waypoints when Landing
		ilsTaxiOff[] = {}; //Taxiway Waypoints when Taking Off
		drawTaxiway = 0; //??
		
		class OutsideTerrain
		{
			satellite = "esus\kuwait\data\s_satout_co.paa";
			enableTerrainSynth = true; 
			class Layers
			{
				class Layer0
				{
					nopx = "esus\kuwait\data\gdt_desert_nopx.paa";
					texture = "esus\kuwait\data\gdt_desert_co.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 8192;
			class Zoom1
			{
				zoomMax = 0.2;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.95;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		class SecondaryAirports {};
		class ReplaceObjects {};
		class Sounds 
		{
			sounds[] = {};
		};
		class Animation 
		{
			vehicles[] = {};
		};

		safePositionAnchor[] = {3874.47,4093.64}; //??
		safePositionRadius = 1900; //??
	};
		
};

class CfgWorldList
{
	class kuwait{};
	
	};
