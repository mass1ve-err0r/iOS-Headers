//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SGEventMetadata : NSObject
{
    unsigned char _type;
    NSString *_categoryDescription;
    NSString *_originBundleId;
    double _confidence;
    NSArray *_schemaOrg;
    NSArray *_participants;
}

+ (unsigned char)eventTypeFromString:(id)arg1;
+ (id)describeType:(unsigned char)arg1;
+ (id)eventMetadataFromEKEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) NSArray *schemaOrg; // @synthesize schemaOrg=_schemaOrg;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *originBundleId; // @synthesize originBundleId=_originBundleId;
@property(readonly, nonatomic) NSString *categoryDescription; // @synthesize categoryDescription=_categoryDescription;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)jsonObject;
- (id)toJsonString;
- (id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6;

@end

