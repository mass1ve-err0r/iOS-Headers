//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSDataSourceLoadIndexesRequest-Protocol.h>

@class IKJSDataSource;

@interface _IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest>
{
    int _state;
    IKJSDataSource *_dataSource;
    CDUnknownBlockType _completion;
    struct _NSRange _range;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) __weak IKJSDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)close:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isClosed;
- (void)cancel;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 range:(struct _NSRange)arg2;

@end

