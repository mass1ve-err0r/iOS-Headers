//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTodayWidgetSession : PBCodable <NSCopying>
{
    CDStruct_95bda58d _countOfArticlesExposedPerSections;
    NSMutableArray *_countOfArticlesExposedEachSections;
    int _widgetArticleCount;
    NSMutableArray *_widgetSectionIdsExposeds;
    int _widgetSectionsExposed;
    struct {
        unsigned int widgetArticleCount:1;
        unsigned int widgetSectionsExposed:1;
    } _has;
}

+ (Class)countOfArticlesExposedEachSectionType;
+ (Class)widgetSectionIdsExposedType;
@property(retain, nonatomic) NSMutableArray *countOfArticlesExposedEachSections; // @synthesize countOfArticlesExposedEachSections=_countOfArticlesExposedEachSections;
@property(retain, nonatomic) NSMutableArray *widgetSectionIdsExposeds; // @synthesize widgetSectionIdsExposeds=_widgetSectionIdsExposeds;
@property(nonatomic) int widgetSectionsExposed; // @synthesize widgetSectionsExposed=_widgetSectionsExposed;
@property(nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfArticlesExposedEachSectionsCount;
- (void)addCountOfArticlesExposedEachSection:(id)arg1;
- (void)clearCountOfArticlesExposedEachSections;
- (id)widgetSectionIdsExposedAtIndex:(unsigned long long)arg1;
- (unsigned long long)widgetSectionIdsExposedsCount;
- (void)addWidgetSectionIdsExposed:(id)arg1;
- (void)clearWidgetSectionIdsExposeds;
- (void)setCountOfArticlesExposedPerSections:(int *)arg1 count:(unsigned long long)arg2;
- (int)countOfArticlesExposedPerSectionAtIndex:(unsigned long long)arg1;
- (void)addCountOfArticlesExposedPerSection:(int)arg1;
- (void)clearCountOfArticlesExposedPerSections;
@property(readonly, nonatomic) int *countOfArticlesExposedPerSections;
@property(readonly, nonatomic) unsigned long long countOfArticlesExposedPerSectionsCount;
@property(nonatomic) _Bool hasWidgetSectionsExposed;
@property(nonatomic) _Bool hasWidgetArticleCount;
- (void)dealloc;

@end

