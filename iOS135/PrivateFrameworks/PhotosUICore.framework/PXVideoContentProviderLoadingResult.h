/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXVideoContentProviderLoadingResult : NSObject {
    NSError * _error;
    AVPlayerItem * _playerItem;
    long long  _priority;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) long long priority;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithPlayerItem:(id)arg1 error:(id)arg2 priority:(long long)arg3;
- (id)playerItem;
- (long long)priority;

@end