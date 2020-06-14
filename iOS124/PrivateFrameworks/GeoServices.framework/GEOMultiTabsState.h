//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOMultiTabsState : PBCodable <NSCopying>
{
    unsigned int _currentTabIndex;
    unsigned int _numberOfTabsOpen;
    struct {
        unsigned int currentTabIndex:1;
        unsigned int numberOfTabsOpen:1;
    } _has;
}

@property(nonatomic) unsigned int currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(nonatomic) unsigned int numberOfTabsOpen; // @synthesize numberOfTabsOpen=_numberOfTabsOpen;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCurrentTabIndex;
@property(nonatomic) _Bool hasNumberOfTabsOpen;

@end

