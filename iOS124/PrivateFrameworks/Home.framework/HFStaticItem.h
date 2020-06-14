//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NSCopying-Protocol.h>

@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying>
{
    NSDictionary *_staticResults;
    CDUnknownBlockType _resultsBlock;
}

+ (id)emptyItem;
@property(copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(retain, nonatomic) NSDictionary *staticResults; // @synthesize staticResults=_staticResults;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;
- (id)initWithResults:(id)arg1;

@end

