//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKUIEntityProviding;

@interface SKUIDynamicPageSectionIndexMapper : NSObject
{
    struct _NSRange *_sectionIndexToEntityRange;
    long long _numberOfSections;
    struct {
        unsigned int respondsToNumberOfSections:1;
    } _entityProviderFlags;
    id <SKUIEntityProviding> _entityProvider;
}

@property(retain, nonatomic) id <SKUIEntityProviding> entityProvider; // @synthesize entityProvider=_entityProvider;
- (void).cxx_destruct;
- (void)_loadDataIfNeeded;
- (void)reloadData;
- (struct _NSRange)rangeForSectionAtIndex:(long long)arg1;
- (long long)globalIndexForEntityIndexPath:(id)arg1;
- (_Bool)getItem:(unsigned long long *)arg1 section:(unsigned long long *)arg2 forGlobalIndex:(long long)arg3;
- (id)entityIndexPathForGlobalIndex:(long long)arg1;
@property(readonly, nonatomic) long long totalNumberOfEntities;
@property(readonly, nonatomic) long long numberOfSections;
- (void)dealloc;

@end

