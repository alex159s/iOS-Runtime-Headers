/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate> {
    NSString *_countryCode;
}

@property (nonatomic, retain) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;

@end
