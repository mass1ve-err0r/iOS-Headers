//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDEventModel.h>

@class NSData, NSString;

@interface HMDSignificantTimeEventModel : HMDEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

// Remaining properties
@property(retain, nonatomic) NSData *offset; // @dynamic offset;
@property(retain, nonatomic) NSString *significantEvent; // @dynamic significantEvent;

@end

