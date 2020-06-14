//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOSearchAttributionSource, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>
{
    GEOSearchAttributionSource *_source;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    NSString *_displayName;
    unsigned int _attributionRequirementsMask;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) GEOSearchAttributionSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)addLogoPath:(id)arg1;
- (id)snippetLogoPathForScale:(double)arg1;
- (id)logoPathForScale:(double)arg1;
- (_Bool)hasAttributionRequirement:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (_Bool)supportsActionURLs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
@property(readonly, nonatomic) _Bool shouldOpenInAppStore;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) unsigned int version;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;

@end

