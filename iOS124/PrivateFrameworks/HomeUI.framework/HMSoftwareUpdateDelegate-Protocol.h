//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMSoftwareUpdate, HMSoftwareUpdateDocumentation;

@protocol HMSoftwareUpdateDelegate <NSObject>

@optional
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentation:(HMSoftwareUpdateDocumentation *)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentationAvailable:(_Bool)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateState:(long long)arg2;
@end

