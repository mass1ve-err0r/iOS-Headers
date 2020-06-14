/* Generated by RuntimeBrowser.
 */

@protocol AVOutputDeviceImpl <NSObject>

@required

- (long long)HAPConformance;
- (NSString *)ID;
- (NSDictionary *)airPlayProperties;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (NSArray *)availableBluetoothListeningModes;
- (NSNumber *)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (NSNumber *)caseBatteryLevel;
- (void)configureUsingBlock:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AVOutputDeviceConfigurationModification> *, void*, NSDictionary *, id /* block */, void*, void, id /* block */, long long, <AVOutputDeviceConfigurationRetrieval> *, NSString *, NSError *, void*
- (NSArray *)connectedPairedDevices;
- (NSString *)currentBluetoothListeningMode;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (NSString *)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (NSString *)groupID;
- (NSData *)identifyingMACAddress;
- (bool)isGroupLeader;
- (NSNumber *)isInEar;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (NSNumber *)leftBatteryLevel;
- (NSString *)logicalDeviceID;
- (NSString *)manufacturer;
- (NSString *)modelID;
- (NSString *)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (AVOutputDevice *)parentOutputDevice;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (NSNumber *)rightBatteryLevel;
- (NSString *)serialNumber;
- (bool)setCurrentBluetoothListeningMode:(NSString *)arg1 error:(id*)arg2;
- (void)setParentOutputDevice:(AVOutputDevice *)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsBluetoothSharing;
- (bool)supportsBufferedAirPlay;
- (NSNumber *)supportsDataOverACLProtocol;
- (float)volume;

@end