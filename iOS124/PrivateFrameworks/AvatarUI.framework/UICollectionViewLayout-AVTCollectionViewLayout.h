//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <AvatarUI/AVTCollectionViewLayout-Protocol.h>

@interface UICollectionViewLayout (AVTCollectionViewLayout) <AVTCollectionViewLayout>
- (struct CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGSize)contentSizeForVisibleBounds:(struct CGRect)arg1 numberOfItems:(long long)arg2;
- (struct CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize)arg2 proposedOrigin:(struct CGPoint)arg3;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
@end

