/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerChangeObserver> {
    id /* block */  _bannerGenerator;
    bool  _enforcesSelectionLimitByDelesectingOtherAssets;
    NSString * _localizedPrompt;
    NSPointerArray * _observers;
    PUPhotoSelectionManager * _photoSelectionManager;
    long long  _promptLocation;
    bool  _selectingAssets;
    bool  _selectingTargetAlbum;
    unsigned long long  _selectionLimit;
    bool  _showsFileSizePicker;
    PHAssetCollection * _sourceAlbum;
    long long  _status;
    NSObject<PLAlbumProtocol> * _targetAlbum;
    NSString * _targetAlbumName;
    NSOrderedSet * _transferredAssets;
}

@property (nonatomic, copy) id /* block */ bannerGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enforcesSelectionLimitByDelesectingOtherAssets;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedPrompt;
@property (nonatomic, retain) PUPhotoSelectionManager *photoSelectionManager;
@property (nonatomic) long long promptLocation;
@property (getter=isSelectingAssets, nonatomic, readonly) bool selectingAssets;
@property (getter=isSelectingTargetAlbum, nonatomic, readonly) bool selectingTargetAlbum;
@property (nonatomic) unsigned long long selectionLimit;
@property (nonatomic) bool showsFileSizePicker;
@property (nonatomic, retain) PHAssetCollection *sourceAlbum;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *targetAlbum;
@property (nonatomic, retain) NSString *targetAlbumName;
@property (nonatomic, copy) NSOrderedSet *transferredAssets;

- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (id /* block */)bannerGenerator;
- (bool)enforcesSelectionLimitByDelesectingOtherAssets;
- (bool)hasLocalTargetAlbum;
- (bool)hasTargetAlbum;
- (id)init;
- (bool)isSelectingAssets;
- (bool)isSelectingTargetAlbum;
- (id)localizedPrompt;
- (id)photoSelectionManager;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (long long)promptLocation;
- (void)removeSessionInfoObserver:(id)arg1;
- (unsigned long long)selectionLimit;
- (void)setBannerGenerator:(id /* block */)arg1;
- (void)setEnforcesSelectionLimitByDelesectingOtherAssets:(bool)arg1;
- (void)setLocalizedPrompt:(id)arg1;
- (void)setPhotoSelectionManager:(id)arg1;
- (void)setPromptLocation:(long long)arg1;
- (void)setSelectionLimit:(unsigned long long)arg1;
- (void)setShowsFileSizePicker:(bool)arg1;
- (void)setSourceAlbum:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetAlbum:(id)arg1;
- (void)setTargetAlbumName:(id)arg1;
- (void)setTransferredAssets:(id)arg1;
- (bool)showsFileSizePicker;
- (id)sourceAlbum;
- (long long)status;
- (id)targetAlbum;
- (id)targetAlbumName;
- (id)transferredAssets;

@end
