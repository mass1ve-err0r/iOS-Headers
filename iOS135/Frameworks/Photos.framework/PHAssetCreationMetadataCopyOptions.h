/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying> {
    bool  _shouldCopySpatialOverCaptureResources;
    bool  _shouldCopyTitleDescriptionAndKeywords;
}

@property (nonatomic) bool shouldCopySpatialOverCaptureResources;
@property (nonatomic) bool shouldCopyTitleDescriptionAndKeywords;

+ (id)metadataCopyOptionsForPublishingOriginals;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initWithXPCDict:(id)arg1;
- (void)setShouldCopySpatialOverCaptureResources:(bool)arg1;
- (void)setShouldCopyTitleDescriptionAndKeywords:(bool)arg1;
- (bool)shouldCopySpatialOverCaptureResources;
- (bool)shouldCopyTitleDescriptionAndKeywords;

@end