#import <Cordova/CDV.h>
#import <health/GHInitializer.h>
#import <health/health.h>


@interface Garmin : CDVPlugin<GHScanDelegate,GHPairingDelegate,GHSyncDelegate,GHParseOptionsDelegate,GHDeviceConnectionDelegate>

- (void)canLaunch:(CDVInvokedUrlCommand*)command;
- (void)launch:(CDVInvokedUrlCommand*)command;

- (void)garminInitializer:(CDVInvokedUrlCommand *)command;
- (void)scanForDevice:(CDVInvokedUrlCommand *)command;
- (void)getSyncData:(CDVInvokedUrlCommand *)command;
- (void)requestSleepData:(CDVInvokedUrlCommand *)command;




@property (nonatomic, readonly) NSMutableArray<GHRemoteDevice*> *pairedDevices;
@property (nonatomic, strong) GHScannedDevice *device;//(GHSyncResult *)result


@end
