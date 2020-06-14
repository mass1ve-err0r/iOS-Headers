//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class NSObject, NSString, UIStackView, VUIDownloadButton, VUILabel, VUILibraryEpisodeFrameView, VUISeparatorView;
@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell
{
    NSString *_title;
    NSString *_releaseDate;
    NSString *_duration;
    VUILibraryEpisodeFrameView *_imageFrameView;
    VUISeparatorView *_separatorView;
    UIStackView *_episodeInfoStackView;
    VUILabel *_titleLabel;
    VUILabel *_releaseDateLabel;
    VUILabel *_durationLabel;
    VUIDownloadButton *_downloadButton;
    VUILabel *_dotSeparatorLabel;
    NSObject<VUIMediaEntityAssetController> *_assetController;
}

+ (id)_metadataLabelWithString:(id)arg1 existingLabel:(id)arg2;
+ (void)configureVUILibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2 andAssetController:(id)arg3;
@property(retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) VUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) VUILabel *releaseDateLabel; // @synthesize releaseDateLabel=_releaseDateLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *episodeInfoStackView; // @synthesize episodeInfoStackView=_episodeInfoStackView;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // @synthesize imageFrameView=_imageFrameView;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)_contentSizeCategoryIsAccessibility;
- (double)_metadataHeightToBaselineNonAXContentSizeCategory;
- (double)_metadataScaledTopMarginForNonAXContentSizeCategory;
- (void)_configureDotSeparator;
- (void)_addDownloadButtonIfRequired:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

