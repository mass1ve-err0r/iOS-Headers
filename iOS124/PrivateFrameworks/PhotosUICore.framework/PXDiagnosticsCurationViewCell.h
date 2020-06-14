//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDictionary, NSNumber, NSString, PXDedupingBadgeView, PXIndexView, PXScoreView, PXStateBadgeView, PXSymbolBadgeView, PXTextSymbolView, UIImage, UIImageView;

@interface PXDiagnosticsCurationViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    PXStateBadgeView *_clusterStateBadgeView;
    PXStateBadgeView *_stateBadgeView;
    PXDedupingBadgeView *_dedupingBadgeView;
    PXTextSymbolView *_sdofOrHDRBadgeView;
    PXTextSymbolView *_favoriteBadgeView;
    PXTextSymbolView *_utilityBadgeView;
    PXTextSymbolView *_blurryBadgeView;
    PXScoreView *_aestheticScoreView;
    PXScoreView *_contentScoreView;
    PXSymbolBadgeView *_symbolBadgeView;
    PXSymbolBadgeView *_dedupedSymbolBadgeView;
    PXIndexView *_indexView;
    _Bool _isFavorite;
    _Bool _isUtility;
    _Bool _isBlurry;
    _Bool _isSDOFOrHDR;
    UIImage *_thumbnailImage;
    NSString *_representedAssetIdentifier;
    NSDictionary *_debugInfo;
    NSString *_state;
    NSString *_clusterState;
    double _aestheticScore;
    double _contentScore;
    NSNumber *_symbolIndex;
    NSString *_dedupingType;
    NSNumber *_dedupedSymbolIndex;
    unsigned long long _index;
}

+ (double)cellHeightWithCellWidth:(double)arg1;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSNumber *dedupedSymbolIndex; // @synthesize dedupedSymbolIndex=_dedupedSymbolIndex;
@property(retain, nonatomic) NSString *dedupingType; // @synthesize dedupingType=_dedupingType;
@property(retain, nonatomic) NSNumber *symbolIndex; // @synthesize symbolIndex=_symbolIndex;
@property(nonatomic) double contentScore; // @synthesize contentScore=_contentScore;
@property(nonatomic) double aestheticScore; // @synthesize aestheticScore=_aestheticScore;
@property(retain, nonatomic) NSString *clusterState; // @synthesize clusterState=_clusterState;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(retain, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic, getter=isSDOFOrHDR, setter=setSDOFOrHDR:) _Bool sdofOrHDR; // @synthesize sdofOrHDR=_isSDOFOrHDR;
@property(nonatomic, getter=isBlurry) _Bool blurry; // @synthesize blurry=_isBlurry;
@property(nonatomic, getter=isUtility) _Bool utility; // @synthesize utility=_isUtility;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_isFavorite;
- (void).cxx_destruct;
- (void)setClusterParity:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

