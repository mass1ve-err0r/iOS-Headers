//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUICatalog, NSDictionary, NSString, _UITextContainerView;

@protocol _UITextContainerViewDelegate
- (CUICatalog *)textContainerView:(_UITextContainerView *)arg1 cuiCatalogForTextEffectName:(NSString *)arg2;
- (void)updateSelectionForTextContainerView:(_UITextContainerView *)arg1;
- (struct _NSRange)selectedRangeForTextContainerView:(_UITextContainerView *)arg1;
- (_Bool)isEditableForTextContainerView:(_UITextContainerView *)arg1;
- (NSDictionary *)textContainerView:(_UITextContainerView *)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (NSDictionary *)linkTextAttributesForTextContainerView:(_UITextContainerView *)arg1;
@end

