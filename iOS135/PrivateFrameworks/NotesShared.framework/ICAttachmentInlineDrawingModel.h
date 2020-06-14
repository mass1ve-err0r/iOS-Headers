/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (nonatomic, readonly) PKDrawing *handwritingRecognitionDrawing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
@property (getter=isHandwritingRecognitionEnabled, nonatomic) bool handwritingRecognitionEnabled;
@property (nonatomic, readonly) UIImage *imageForActivityItem;
@property (getter=isTitleQueryEnabled, nonatomic) bool titleQueryEnabled;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (bool)hasPreviews;
- (bool)preferLocalPreviewImages;
- (bool)previewsSupportMultipleAppearances;
- (bool)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (bool)shouldShowInContentInfoText;
- (bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (unsigned short)drawingPreviewVersion;
+ (id)generateImageForAttachment:(id)arg1 fromDrawing:(id)arg2 fullResolution:(bool)arg3 appearanceInfo:(id)arg4;
+ (void)generatePreviewsForAttachment:(id)arg1 fromDrawing:(id)arg2;
+ (id)previewImageFromDrawing:(id)arg1 fullImage:(struct CGImage { }*)arg2 scale:(double)arg3;

- (id)activityItem;
- (id)activityItems;
- (bool)actuallyMergeWithDrawing:(id)arg1;
- (void)attachmentModelDealloc;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)generatePreviewsDuringCloudActivity;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id)handwritingRecognitionDrawing;
- (id)handwritingRecognitionDrawingQueue;
- (id)imageForActivityItem;
- (bool)isHandwritingRecognitionEnabled;
- (bool)isTitleQueryEnabled;
- (bool)mergeWithDrawing:(id)arg1;
- (bool)mergeWithMergeableData:(id)arg1;
- (id)mergeableDataForCopying;
- (bool)needToGeneratePreviews;
- (id)newDrawingFromMergeableData;
- (void)setHandwritingRecognitionDrawing:(id)arg1;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;
- (void)setHandwritingRecognitionEnabled:(bool)arg1;
- (void)setTitleQuery:(id)arg1;
- (void)setTitleQueryEnabled:(bool)arg1;
- (id)titleQuery;
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;
- (id)titleQueryDrawingDispatchQueue:(id)arg1;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;

@end