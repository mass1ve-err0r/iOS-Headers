//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol AXValidationReportingServices;

@interface AXValidationManager : NSObject
{
    _Bool _shouldLogToConsole;
    _Bool _shouldCrashOnError;
    _Bool _shouldReportToServer;
    _Bool _forceDoNotReport;
    _Bool _debugBuild;
    _Bool _shouldPerformValidationChecks;
    unsigned long long _numberOfValidationErrors;
    NSString *_validationTargetName;
    NSString *_overrideProcessName;
    NSMutableArray *_consoleErrorMessages;
    id <AXValidationReportingServices> _validationReportingServices;
    unsigned long long _numberOfValidationWarnings;
    NSMutableArray *_consoleWarningMessages;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *consoleWarningMessages; // @synthesize consoleWarningMessages=_consoleWarningMessages;
@property(nonatomic) unsigned long long numberOfValidationWarnings; // @synthesize numberOfValidationWarnings=_numberOfValidationWarnings;
@property(nonatomic) _Bool shouldPerformValidationChecks; // @synthesize shouldPerformValidationChecks=_shouldPerformValidationChecks;
@property(retain, nonatomic) id <AXValidationReportingServices> validationReportingServices; // @synthesize validationReportingServices=_validationReportingServices;
@property(nonatomic, getter=isDebugBuild) _Bool debugBuild; // @synthesize debugBuild=_debugBuild;
@property(retain, nonatomic) NSMutableArray *consoleErrorMessages; // @synthesize consoleErrorMessages=_consoleErrorMessages;
@property(copy, nonatomic) NSString *overrideProcessName; // @synthesize overrideProcessName=_overrideProcessName;
@property(copy, nonatomic) NSString *validationTargetName; // @synthesize validationTargetName=_validationTargetName;
@property(nonatomic) _Bool forceDoNotReport; // @synthesize forceDoNotReport=_forceDoNotReport;
@property(nonatomic) unsigned long long numberOfValidationErrors; // @synthesize numberOfValidationErrors=_numberOfValidationErrors;
@property(nonatomic) _Bool shouldReportToServer; // @synthesize shouldReportToServer=_shouldReportToServer;
@property(nonatomic) _Bool shouldCrashOnError; // @synthesize shouldCrashOnError=_shouldCrashOnError;
@property(nonatomic) _Bool shouldLogToConsole; // @synthesize shouldLogToConsole=_shouldLogToConsole;
- (void).cxx_destruct;
- (void)sendValidationSuccessForProcessName:(id)arg1;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (_Bool)installSafeCategory:(id)arg1 canInteractWithTargetClass:(_Bool)arg2;
- (_Bool)installSafeCategory:(id)arg1;
- (void)_generateWarningsForMethodType:(int)arg1 onClass:(Class)arg2 superclassMethods:(struct objc_method **)arg3 numberOfSuperclassMethods:(unsigned int)arg4;
- (void)_generateWarningsOnSafeCategoryClass:(Class)arg1;
- (void)_generateWarningsForPrefixedMethodNames:(id)arg1 client:(id)arg2 methodType:(int)arg3 methodName:(id)arg4 className:(id)arg5;
- (id)_nameForMethod:(struct objc_method *)arg1;
- (void)_iterateMethodsOfType:(int)arg1 onClass:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasProperty:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 hasProperty:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(_Bool)arg4 isRequired:(_Bool)arg5;
- (_Bool)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(_Bool)arg3 isRequired:(_Bool)arg4;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 conformsToProtocol:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 conformsToProtocol:(id)arg2;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3;
- (_Bool)validateClass:(id)arg1 conformsToProtocol:(id)arg2;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(const char *)arg4;
- (_Bool)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(const char *)arg3;
- (_Bool)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(const char *)arg3;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char *)arg4;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char *)arg4 argList:(struct __va_list_tag [1])arg5;
- (_Bool)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char *)arg4 argList:(struct __va_list_tag [1])arg5;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char *)arg4;
- (_Bool)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(const char *)arg3;
- (_Bool)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6;
- (_Bool)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(const char *)arg4;
- (_Bool)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(const char *)arg3;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3;
- (_Bool)validateClass:(id)arg1 isKindOfClass:(id)arg2;
- (_Bool)client:(id)arg1 validateClass:(id)arg2;
- (_Bool)validateClass:(id)arg1;
- (void)_printConsoleReport:(_Bool)arg1 isDelayed:(_Bool)arg2;
- (void)_clearState;
- (void)_resetState;
- (void)installSafeCategories:(CDUnknownBlockType)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4;
- (void)performValidations:(CDUnknownBlockType)arg1 withPreValidationHandler:(CDUnknownBlockType)arg2 postValidationHandler:(CDUnknownBlockType)arg3 safeCategoryInstallationHandler:(CDUnknownBlockType)arg4;
- (void)performValidations:(CDUnknownBlockType)arg1 withPreValidationHandler:(CDUnknownBlockType)arg2 postValidationHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

