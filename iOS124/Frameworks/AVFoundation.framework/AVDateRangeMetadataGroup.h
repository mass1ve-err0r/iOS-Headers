//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataGroup.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying>
{
    AVDateRangeMetadataGroupInternal *_priv;
}

+ (id)_metadataItemsForFigMetadataArray:(id)arg1;
+ (id)_figMetadataArrayForMetadataItems:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)init;
- (id)uniqueID;
- (id)classifyingLabel;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;
@property(readonly, nonatomic) NSDate *modificationTimestamp;
@property(readonly, nonatomic) NSDate *discoveryTimestamp;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1;
- (id)_taggedRangeMetadataDictionary;
@property(readonly, nonatomic, getter=_dateRangeMetadataGroupInternal) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;

@end

