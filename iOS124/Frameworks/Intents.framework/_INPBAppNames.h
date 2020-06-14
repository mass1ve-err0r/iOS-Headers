//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAppNames-Protocol.h>

@class NSString;

@interface _INPBAppNames : PBCodable <_INPBAppNames, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_appName;
    NSString *_axSpokenName;
    NSString *_displayName;
    NSString *_spotlightName;
}

@property(copy, nonatomic) NSString *spotlightName; // @synthesize spotlightName=_spotlightName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *axSpokenName; // @synthesize axSpokenName=_axSpokenName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasSpotlightName;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasAxSpokenName;
@property(readonly, nonatomic) _Bool hasAppName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

