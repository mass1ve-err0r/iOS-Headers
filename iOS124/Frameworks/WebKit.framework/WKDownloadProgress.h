//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface WKDownloadProgress : NSProgress
{
    struct RetainPtr<NSURLSessionDownloadTask> m_task;
    struct Download *m_download;
    RefPtr_ea257445 m_sandboxExtension;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_unpublish;
- (void)_publish;
- (id)initWithDownloadTask:(id)arg1 download:(struct Download *)arg2 URL:(id)arg3 sandboxExtension:(RefPtr_ea257445)arg4;

@end

