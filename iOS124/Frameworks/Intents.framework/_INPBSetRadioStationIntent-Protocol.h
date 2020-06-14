//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetRadioStationIntent <NSObject>
@property(readonly, nonatomic) _Bool hasStationName;
@property(retain, nonatomic) _INPBString *stationName;
@property(nonatomic) _Bool hasRadioType;
@property(nonatomic) int radioType;
@property(readonly, nonatomic) _Bool hasPresetNumber;
@property(retain, nonatomic) _INPBInteger *presetNumber;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasFrequency;
@property(retain, nonatomic) _INPBDouble *frequency;
@property(readonly, nonatomic) _Bool hasChannel;
@property(retain, nonatomic) _INPBString *channel;
- (int)StringAsRadioType:(NSString *)arg1;
- (NSString *)radioTypeAsString:(int)arg1;
@end

