//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSArray;
@protocol NUPage, NUPaging;

@protocol NUPagingFactory <NSObject>
- (id <NUPaging>)paging:(id <NUPaging>)arg1 byRemovingPage:(id <NUPage>)arg2;
- (id <NUPaging>)paging:(id <NUPaging>)arg1 byAddingPage:(id <NUPage>)arg2 afterPage:(id <NUPage>)arg3;
- (id <NUPaging>)createPagingForArticleIDs:(NSArray *)arg1;
@end

