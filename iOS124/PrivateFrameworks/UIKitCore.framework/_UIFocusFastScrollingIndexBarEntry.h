//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarEntry : NSObject
{
    _Bool _isPlaceholder;
    _Bool _hasCachedContentOffset;
    struct CGPoint _cachedContentOffset;
    CDUnknownBlockType _contentOffsetGenerator;
    NSString *_title;
    NSIndexPath *_targetFocusedIndexPath;
}

+ (id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2;
+ (id)entryWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;
+ (id)entryWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;
@property(copy, nonatomic) NSIndexPath *targetFocusedIndexPath; // @synthesize targetFocusedIndexPath=_targetFocusedIndexPath;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (id)initWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;

@end

