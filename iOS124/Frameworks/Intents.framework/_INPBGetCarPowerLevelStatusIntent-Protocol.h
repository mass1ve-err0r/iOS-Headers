//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBGetCarPowerLevelStatusIntent <NSObject>
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
@end

