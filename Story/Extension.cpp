/*
 * Extension Pattern
 * ========================
 * 
 * Extension.h
 * - Subject
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Extension.h"

Extension::Extension()
	:owner_(0) {
}

Extension::~Extension() {
}

void Extension::RegisterOwner(File *owner) {
	owner_ = owner;
}