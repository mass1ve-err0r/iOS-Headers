//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSObject, TSKFindReplaceController, TSKSelection;
@protocol TSKSearchReference;

@protocol TSKFindReplaceDelegate <NSObject>
- (struct _NSRange)visibleRootIndexRange;
- (void)setSelection:(TSKSelection *)arg1 onModel:(NSObject *)arg2 withFlags:(unsigned long long)arg3;

@optional
- (_Bool)findReplaceController:(TSKFindReplaceController *)arg1 shouldSkipSearchReference:(id <TSKSearchReference>)arg2;
- (void)findReplaceControllerDidFindNoResults:(TSKFindReplaceController *)arg1;
- (void)findReplaceController:(TSKFindReplaceController *)arg1 didWrapInDirection:(unsigned long long)arg2;
- (void)willScrollToReference:(id <TSKSearchReference>)arg1;
@end

