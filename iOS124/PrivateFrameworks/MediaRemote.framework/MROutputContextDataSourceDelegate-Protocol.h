//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRAVOutputDevice, MROutputContextDataSource;

@protocol MROutputContextDataSourceDelegate <NSObject>
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 outputDevice:(MRAVOutputDevice *)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 outputDevice:(MRAVOutputDevice *)arg2 didChangeVolume:(float)arg3;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 didRemoveOutputDevice:(MRAVOutputDevice *)arg2;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 didAddOutputDevice:(MRAVOutputDevice *)arg2;
@end

