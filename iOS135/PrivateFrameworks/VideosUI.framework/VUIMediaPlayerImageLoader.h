/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaPlayerImageLoader : NSObject <TVImageLoader> {
    NSOperationQueue * _artworkLoadingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isMediaPlayerImage:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)cancelLoad:(id)arg1;
- (void)dealloc;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end