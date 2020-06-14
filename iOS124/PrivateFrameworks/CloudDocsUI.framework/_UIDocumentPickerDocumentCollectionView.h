//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCollectionView : UICollectionView
{
    _Bool _avoidNegativeContentOffset;
    double _contentSizeAdjustment;
}

@property(nonatomic) double contentSizeAdjustment; // @synthesize contentSizeAdjustment=_contentSizeAdjustment;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_updatedContentOffsetForOffset:(struct CGPoint)arg1 avoidNegativeContentOffset:(_Bool)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAdjustedContentSize:(struct CGSize)arg1 withFrameSize:(struct CGSize)arg2;
- (void)_performWhileAvoidingNegativeContentOffset:(CDUnknownBlockType)arg1;

@end

