//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIMediaTagsViewLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductBannerLayout : TVViewLayout
{
    long long _sizeClass;
    _Bool _isMovieLayout;
    TVImageLayout *_logoImageLayout;
    VUITextLayout *_logoTextLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_descriptionTitleTextLayout;
    VUIMediaTagsViewLayout *_tagsLayout;
    VUIMediaTagsViewLayout *_infoTagsLayout;
    TVImageLayout *_coverArtImageLayout;
    double _maxCoverArtImageHeight;
    VUITextLayout *_disclaimerTextLayout;
    VUITextLayout *_availabilityTextLayout;
    TVImageLayout *_availabilityImageLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 isMovieLayout:(_Bool)arg4;
@property(readonly, nonatomic) TVImageLayout *availabilityImageLayout; // @synthesize availabilityImageLayout=_availabilityImageLayout;
@property(readonly, nonatomic) VUITextLayout *availabilityTextLayout; // @synthesize availabilityTextLayout=_availabilityTextLayout;
@property(readonly, nonatomic) VUITextLayout *disclaimerTextLayout; // @synthesize disclaimerTextLayout=_disclaimerTextLayout;
@property(readonly, nonatomic) double maxCoverArtImageHeight; // @synthesize maxCoverArtImageHeight=_maxCoverArtImageHeight;
@property(retain, nonatomic) TVImageLayout *coverArtImageLayout; // @synthesize coverArtImageLayout=_coverArtImageLayout;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *infoTagsLayout; // @synthesize infoTagsLayout=_infoTagsLayout;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *tagsLayout; // @synthesize tagsLayout=_tagsLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTitleTextLayout; // @synthesize descriptionTitleTextLayout=_descriptionTitleTextLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(retain, nonatomic) VUITextLayout *logoTextLayout; // @synthesize logoTextLayout=_logoTextLayout;
@property(retain, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
- (void).cxx_destruct;
- (void)_createLayoutsWithSizeClass:(long long)arg1 isMovieLayout:(_Bool)arg2;
- (void)updateWithSizeClass:(long long)arg1 contentSizeCategoryIsAccessibility:(_Bool)arg2;
- (id)initWithSizeClass:(long long)arg1 isMovieLayout:(_Bool)arg2;

@end

