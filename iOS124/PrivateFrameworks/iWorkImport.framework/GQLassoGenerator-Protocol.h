//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class GQDLSDocument, GQDSStyle, GQSDocument;

@protocol GQLassoGenerator <NSObject>
+ (int)handleDrawableZOrder:(const char *)arg1 state:(GQSDocument *)arg2;
+ (Class)beginWorkspacePage:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)handleWorkspaceStyle:(GQDSStyle *)arg1 state:(GQSDocument *)arg2;
+ (int)endWorkspace:(GQSDocument *)arg1;
+ (int)beginWorkspace:(const char *)arg1 state:(GQSDocument *)arg2;
+ (int)handleStylesheet:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)endDocument:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)beginDocument:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
@end

