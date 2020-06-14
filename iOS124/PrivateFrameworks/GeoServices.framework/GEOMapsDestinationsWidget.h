//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying>
{
    NSMutableArray *_proactiveItems;
    int _tappedItemIndex;
    _Bool _everExpanded;
    _Bool _initiallyExpanded;
    struct {
        unsigned int tappedItemIndex:1;
        unsigned int everExpanded:1;
        unsigned int initiallyExpanded:1;
    } _has;
}

+ (Class)proactiveItemType;
@property(nonatomic) _Bool everExpanded; // @synthesize everExpanded=_everExpanded;
@property(nonatomic) _Bool initiallyExpanded; // @synthesize initiallyExpanded=_initiallyExpanded;
@property(retain, nonatomic) NSMutableArray *proactiveItems; // @synthesize proactiveItems=_proactiveItems;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTappedItemIndex;
@property(nonatomic) int tappedItemIndex; // @synthesize tappedItemIndex=_tappedItemIndex;
@property(nonatomic) _Bool hasEverExpanded;
@property(nonatomic) _Bool hasInitiallyExpanded;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)proactiveItemsCount;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;

@end

