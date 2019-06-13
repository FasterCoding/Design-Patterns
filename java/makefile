all: singleton \
	 builder

singleton:
	@$(MAKE) --no-print-directory -C Singleton
	@echo "\n==== $@ ====\n"
	@cd bin/Singleton && java Main

builder:
	@$(MAKE) --no-print-directory -C Builder
	@echo "\n==== $@ ====\n"
	@cd bin/BuilderPattern && java com.fastercoding.Main

.PHONY: clean
clean:
	@rm -rf bin
