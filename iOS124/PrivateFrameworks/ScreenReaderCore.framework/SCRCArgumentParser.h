//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSMutableArray, NSString;

@interface SCRCArgumentParser : SCRCArgumentSubcommand
{
    int _argc;
    char **_argv;
    NSMutableArray *_subcommandArray;
    NSMutableArray *_argumentArray;
    NSString *_appName;
    SCRCArgumentSubcommand *_subcommand;
    _Bool _isLaunchedAtLogin;
}

+ (id)commandPath;
+ (id)versionString;
+ (id)processIdentifier;
- (void).cxx_destruct;
- (id)setRunningAtStartup:(id)arg1;
- (id)_displayHelp:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (void)stop;
- (int)run;
- (_Bool)parse;
- (void)addSubcommand:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (_Bool)isLaunchedAtLogin;
- (int)argc;
- (char **)argv;
- (void)dealloc;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;

@end

