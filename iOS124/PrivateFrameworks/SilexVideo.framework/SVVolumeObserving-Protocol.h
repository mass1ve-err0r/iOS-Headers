//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVolumeProviding;

@protocol SVVolumeObserving <NSObject>

@optional
- (void)volumeChanged:(id <SVVolumeProviding>)arg1;
- (void)muteStateChanged:(id <SVVolumeProviding>)arg1;
@end

