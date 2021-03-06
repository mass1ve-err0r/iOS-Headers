/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPMetadataProviderSpecializationContext : NSObject {
    NSString * _MIMEType;
    NSURL * _URL;
    unsigned long long  _allowedSpecializations;
    bool  _hasLoadedResource;
    bool  _shouldFetchSubresources;
    WKWebView * _webView;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long allowedSpecializations;
@property (nonatomic, readonly) bool hasLoadedResource;
@property (nonatomic, readonly) bool shouldFetchSubresources;
@property (nonatomic, readonly, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (unsigned long long)allowedSpecializations;
- (bool)hasLoadedResource;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(bool)arg4 shouldFetchSubresources:(bool)arg5 allowedSpecializations:(unsigned long long)arg6;
- (bool)shouldFetchSubresources;
- (id)webView;

@end
