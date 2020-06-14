//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosEditUI/PLSlalomRegionEditorDelegate-Protocol.h>
#import <PhotosEditUI/UIMovieScrubberDataSource-Protocol.h>
#import <PhotosEditUI/UIMovieScrubberDelegate-Protocol.h>

@class NSString, PLSlalomRegionEditor, PUVideoEditScrubberImageSource, UIMovieScrubber, UIView;
@protocol PUVideoEditScrubberControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoEditScrubberController : NSObject <UIMovieScrubberDataSource, UIMovieScrubberDelegate, PLSlalomRegionEditorDelegate>
{
    struct {
        _Bool respondsToDidBeginScrubbing;
        _Bool respondsToDidEndScrubbing;
        _Bool respondsToValueDidChange;
        _Bool respondsToStartDidChange;
        _Bool respondsToEndDidChange;
        _Bool respondsToDidBeginEditingSlomoRegions;
        _Bool respondsToDidEndEditingSlomoRegions;
        _Bool respondsToSlomoRegionsDidChangewithHandle;
    } _delegateFlags;
    _Bool _showsSlomoRegionEditor;
    double _videoDuration;
    double _videoAspectRatio;
    PUVideoEditScrubberImageSource *_thumbnailSource;
    id <PUVideoEditScrubberControllerDelegate> _delegate;
    double _edgeInset;
    UIMovieScrubber *_movieScrubber;
    UIView *_scrubberView;
    PLSlalomRegionEditor *__slomoRegionEditor;
}

@property(retain, nonatomic, setter=_setSlomoRegionEditor:) PLSlalomRegionEditor *_slomoRegionEditor; // @synthesize _slomoRegionEditor=__slomoRegionEditor;
@property(retain, nonatomic, setter=_setScrubberView:) UIView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(retain, nonatomic) UIMovieScrubber *movieScrubber; // @synthesize movieScrubber=_movieScrubber;
@property(nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic) _Bool showsSlomoRegionEditor; // @synthesize showsSlomoRegionEditor=_showsSlomoRegionEditor;
@property(nonatomic) __weak id <PUVideoEditScrubberControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUVideoEditScrubberImageSource *thumbnailSource; // @synthesize thumbnailSource=_thumbnailSource;
@property(readonly, nonatomic) double videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void).cxx_destruct;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (_Bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(_Bool)arg2;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(_Bool)arg3;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (double)movieScrubberDuration:(id)arg1;
- (void)_updateSlomoRegionEditor;
- (void)_createView;
- (void)reloadData;
@property(nonatomic) double trimStartTime;
@property(nonatomic) double trimEndTime;
@property(nonatomic) double slomoMinTime;
@property(nonatomic) double slomoMaxTime;
@property(nonatomic) double slomoStartTime;
@property(nonatomic) double slomoEndTime;
@property(nonatomic) _Bool thumbIsVisible;
@property(readonly, nonatomic) _Bool isEditing;
- (void)setCurrentTime:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double currentTime;
- (id)initWithVideoDuration:(double)arg1 videoAspectRatio:(double)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

