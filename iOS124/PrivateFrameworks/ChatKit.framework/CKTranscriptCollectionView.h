//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView
{
    _Bool _ignoresContentOffsetChanges;
    _Bool _dynamicsDisabled;
}

@property(nonatomic) _Bool dynamicsDisabled; // @synthesize dynamicsDisabled=_dynamicsDisabled;
@property(nonatomic) _Bool ignoresContentOffsetChanges; // @synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges;
- (void)reloadData;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

