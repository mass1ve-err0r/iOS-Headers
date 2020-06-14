/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent {
    bool  _containsHEIFImage;
    bool  _containsHEVCVideo;
    bool  _didCheckForLivePhotoPairingIdentifier;
    id  _hevcTrackFormatDescription;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageDimensions;
    NSString * _livePhotoPairingIdentifier;
    long long  _locationMetadataStatus;
    bool  _preflighted;
    NSString * _renderOriginatingSignature;
}

@property bool containsHEIFImage;
@property bool containsHEVCVideo;
@property bool didCheckForLivePhotoPairingIdentifier;
@property (retain) id hevcTrackFormatDescription;
@property struct CGSize { double x1; double x2; } imageDimensions;
@property (nonatomic, retain) NSString *livePhotoPairingIdentifier;
@property long long locationMetadataStatus;
@property bool preflighted;
@property (copy) NSString *renderOriginatingSignature;

+ (id)imageSourceForFileURL:(id)arg1;
+ (id)imageSourceForFileURL:(id)arg1 dimensions:(struct CGSize { double x1; double x2; })arg2;
+ (Class)requestClass;
+ (id)sourceForFileURL:(id)arg1;
+ (id)sourceForFileURL:(id)arg1 mediaType:(long long)arg2 imageDimensions:(struct CGSize { double x1; double x2; })arg3;
+ (id)videoSourceForFileURL:(id)arg1;

- (void).cxx_destruct;
- (void)checkForHEIFImage;
- (void)checkForHEVCVideo;
- (void)checkForLivePhotoPairingIdentifier;
- (void)checkForLocationData;
- (bool)containsHEIFImage;
- (bool)containsHEVCVideo;
- (bool)determineMediaTypeFromPathExtensionWithError:(id*)arg1;
- (bool)didCheckForLivePhotoPairingIdentifier;
- (id)hevcTrackFormatDescription;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (long long)imageSourceLocationMetadataStatus;
- (id)livePhotoPairingIdentifier;
- (long long)locationMetadataStatus;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg1;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)arg1;
- (bool)preflightWithError:(id*)arg1;
- (bool)preflighted;
- (id)renderOriginatingSignature;
- (void)setContainsHEIFImage:(bool)arg1;
- (void)setContainsHEVCVideo:(bool)arg1;
- (void)setDidCheckForLivePhotoPairingIdentifier:(bool)arg1;
- (void)setHevcTrackFormatDescription:(id)arg1;
- (void)setImageDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setLivePhotoPairingIdentifier:(id)arg1;
- (void)setLocationMetadataStatus:(long long)arg1;
- (void)setPreflighted:(bool)arg1;
- (void)setRenderOriginatingSignature:(id)arg1;
- (long long)videoSourceLocationMetadataStatus;

@end