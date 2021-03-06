/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate, readonly) id delayingTerminate;
@property (readonly) NSNumber *exitStoreReasonButton;
@property (readonly) NSNumber *exitStoreReasonDownloadComplete;
@property (readonly) NSNumber *exitStoreReasonFatalError;
@property (readonly) NSNumber *exitStoreReasonGotoMainStore;
@property (readonly) NSNumber *exitStoreReasonOther;
@property (readonly) NSNumber *exitStoreReasonPurchase;
@property (retain) id iconBadgeNumber;
@property (getter=wasLaunchedFromLibrary, readonly) id launchedFromLibrary;
@property (getter=isRunningInStoreDemoMode, readonly) id runningInStoreDemoMode;
@property (readonly) id screenHeight;
@property (readonly) id screenWidth;
@property (readonly) int statusBarAnimationFade;
@property (readonly) int statusBarAnimationNone;
@property (readonly) int statusBarAnimationSlide;
@property id statusBarHidden;
@property int statusBarStyle;
@property (readonly) int statusBarStyleBlackOpaque;
@property (readonly) int statusBarStyleBlackTranslucent;
@property (readonly) int statusBarStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)attributeKeys;
- (void)beginDelayingTerminate;
- (void)endDelayingTerminate;
- (id)exitStoreReasonButton;
- (id)exitStoreReasonDownloadComplete;
- (id)exitStoreReasonFatalError;
- (id)exitStoreReasonGotoMainStore;
- (id)exitStoreReasonOther;
- (id)exitStoreReasonPurchase;
- (void)exitStoreWithReason:(id)arg1;
- (id)iconBadgeNumber;
- (id)isDelayingTerminate;
- (id)isRunningInStoreDemoMode;
- (void)returnToLibrary;
- (id)screenHeight;
- (id)screenWidth;
- (id)scriptAttributeKeys;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(BOOL)arg2;
- (void)setIconBadgeNumber:(id)arg1;
- (void)setStatusBarHidden:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(int)arg2;
- (void)setStatusBarStyle:(int)arg1;
- (void)setStatusBarStyle:(int)arg1 animated:(BOOL)arg2;
- (void)showNewsstand;
- (int)statusBarAnimationFade;
- (int)statusBarAnimationNone;
- (int)statusBarAnimationSlide;
- (id)statusBarHidden;
- (int)statusBarStyle;
- (int)statusBarStyleBlackOpaque;
- (int)statusBarStyleBlackTranslucent;
- (int)statusBarStyleDefault;
- (id)wasLaunchedFromLibrary;

@end
