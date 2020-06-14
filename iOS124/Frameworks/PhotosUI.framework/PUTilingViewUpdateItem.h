//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, PUTilingDataSource;

@interface PUTilingViewUpdateItem : NSObject
{
    long long _action;
    NSIndexPath *_indexPathBeforeUpdate;
    NSIndexPath *_indexPathAfterUpdate;
    PUTilingDataSource *_dataSource;
}

@property(readonly, nonatomic) PUTilingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_indexPathAfterUpdate;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_indexPathBeforeUpdate;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)transformedIndexPath:(id)arg1 withDataSource:(id)arg2;
- (id)initWithAction:(long long)arg1 indexPathBeforeUpdate:(id)arg2 indexPathAfterUpdate:(id)arg3 dataSource:(id)arg4;

@end

