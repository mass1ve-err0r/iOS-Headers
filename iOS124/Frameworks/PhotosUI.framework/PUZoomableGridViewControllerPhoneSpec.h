//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUZoomableGridViewControllerSpec.h>

@interface PUZoomableGridViewControllerPhoneSpec : PUZoomableGridViewControllerSpec
{
}

- (long long)yearsSectionHeaderStyle;
- (struct UIEdgeInsets)yearsLevelSectionHeaderHighlightInset;
- (struct CGSize)yearsLevelThumbnailSize;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (long long)collectionsSectionHeaderStyle;
- (struct UIEdgeInsets)collectionsLevelSectionHeaderHighlightInset;
- (struct CGSize)collectionsLevelThumbnailSize;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (long long)fullMomentsSectionHeaderStyle;
- (struct UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize)fullMomentsLevelThumbnailSize;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (struct UIEdgeInsets)magnifiedDragEdgeInsets;
- (double)magnifiedYOffset;
- (struct CGSize)magnifiedImageSize;
- (_Bool)dynamicLayoutEnabled;
- (void)updateGridLayoutUsingFloatingHeaders:(id)arg1;
- (_Bool)canDisplayMultipleRightBarButtonItems;
- (id)newGridSpec;

@end

